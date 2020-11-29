#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256

void appendcompressed(int runcounter, int position, char *inputstring, char *outputstring)
{
	char temp[4];
	temp[0] = '~';
	temp[1] = runcounter + 30;
	temp[2] = inputstring[position];
	temp[3] = '\0';
	strcat(outputstring, temp);
}

void appenduncompressed(int runcounter, int position, char *inputstring, char *outputstring)
{
	char temp[runcounter+1];

	for (int i=0; i<runcounter; i++)
	{
		temp[i] = inputstring[position];
	}

	temp[runcounter] = '\0';
	strcat(outputstring, temp);
}

int compressnormal(int position, char *outputstring, char *inputstring, int length_inputstring)
{
	int runcounter = 1;
	_Bool runactive = 1;

	while(runactive == 1 && runcounter <= 95 && position < length_inputstring)
	{
		if(inputstring[position] == inputstring[position+1])
		{
			runcounter += 1;
			position += 1;
		}
		else
		{
			runactive = 0;
			position += 1;
		}
	}

	if(runcounter > 3)
	{
		if(runcounter > 95)
		{
			runcounter = 95;
			appendcompressed(runcounter, position-1, inputstring, outputstring);
		}
		else
		{
			appendcompressed(runcounter, position-1, inputstring, outputstring);
		}
	}
	else
	{
		appenduncompressed(runcounter, position-1, inputstring, outputstring);
	}

	//printf("runcounter %d position %d\n", runcounter, position);

	return position;	
}

int compressescape(int position, char *outputstring, char *inputstring, int length_inputstring)
{
	int runcounter = 1;
	_Bool runactive = 1;

	while(runactive == 1 && runcounter <= 95 && position < length_inputstring)
	{
		if(inputstring[position] == inputstring[position+1])
		{
			runcounter += 1;
			position += 1;
		}
		else
		{
			runactive = 0;
			position += 1;
		}
	}

	if(runcounter == 1)
	{
		char *temp = "~~";
		strcat(outputstring, temp);
	}
	else
	{
		if(runcounter > 95)
		{
			runcounter = 95;
			appendcompressed(runcounter, position-1, inputstring, outputstring);
		}
		else
		{
			appendcompressed(runcounter, position-1, inputstring, outputstring);
		}
	}

	//printf("runcounter %d position %d\n", runcounter, position);

	return position;
}

char *doRLC(char *inputstring)
{
	int length_inputstring = strlen(inputstring);
	char *outputstring = malloc(length_inputstring * sizeof(char) + 1);
	outputstring = strcpy(outputstring, "");
	int position = 0;

	while(position < length_inputstring)
	{
		if (inputstring[position] == '~')
		{
			position = compressescape(position, outputstring, inputstring, length_inputstring);
		}
		else
		{
			position = compressnormal(position, outputstring, inputstring, length_inputstring);
		}
	}

	outputstring = realloc(outputstring, strlen(outputstring) + 1);

	return outputstring;
}

char *undoRLC(char *inputstring)
{
	//char *outputstring = "12345";
	
	int length_inputstring = strlen(inputstring);
	printf("undorlc\n");
	printf("%d\n", length_inputstring);
	char *outputstring = malloc(MAX_LEN * sizeof(char) + 1);
	outputstring = strcpy(outputstring, "");
	int position = 0;

	while(position < length_inputstring)
	{
		if (inputstring[position] == '~' && inputstring[position+1] == '~')
		{
			strcat(outputstring, "~");
			position += 2;
			printf("bin da fall 1 %s\n", outputstring);
		}
		else if (inputstring[position] == '~' && inputstring[position+1] != '~')
		{
			int repeatcounter = inputstring[position+1] - 30;
			
			char temp[repeatcounter+1];

			for(int i = 0; i < repeatcounter; i++)
			{
				temp[i] = inputstring[position+2];
			}
			temp[repeatcounter] = '\0';
			strcat(outputstring, temp);
			position += 3;
		}
		else
		{
			printf("bin hier");
			char temp[2];
			temp[0] = inputstring[position];
			temp[1] = '\0';
			strcat(outputstring, temp);
			position += 1;
		}
	}

	outputstring = realloc(outputstring, strlen(outputstring) + 1);

	return outputstring;
}

int main(int argc, char *argv[])
{
	if(strcmp(argv[1],"c") == 0)
	{
		char *line = malloc(sizeof(char)*MAX_LEN);
		FILE *inputfile = fopen(argv[2], "r");
		FILE *outputfile = fopen(argv[3], "w");
		
		while(!feof(inputfile))
		{
			char *ptr = fgets(line, MAX_LEN, inputfile);
			char *outputstring = doRLC(line);

			if(ptr != NULL)
			{
				printf("%s", outputstring);
				fputs(outputstring, outputfile);
			}
		}
		fclose(inputfile);
		free(line);
		fclose(outputfile);
	}

	else if(strcmp(argv[1],"d") == 0)
	{
		char *line = malloc(sizeof(char)*MAX_LEN);
		FILE *inputfile = fopen(argv[2], "r");
		FILE *outputfile = fopen(argv[3], "w");

		while(!feof(inputfile))
		{
			char *ptr = fgets(line, MAX_LEN, inputfile);
			//printf("%s\n", line);
			//char *outputstring = undoRLC(line);
			//undoRLC(line);
			
			if(ptr != NULL)
			{
				printf("LINE TO ENCODE:%s", line);
				char *appendline = undoRLC(line);
				printf("ENCODIERTE ZEILE:%s", appendline);
				fputs(appendline, outputfile);
			}
		}
		fclose(inputfile);
		free(line);
		fclose(outputfile);
	}

	else
	{
		printf("USAGE:\nCOMPRESS: ./a.out c source target\nDECOMPRESS: ./a.out d source target\n");
	}


	return 0;
}	