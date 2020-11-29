#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *removeSpaces(char *inStr)
{
	int length;
	length = strlen(inStr);

	char *newStr = malloc(length * sizeof(char));

	int position = 0;

	for(int i = 0; i < length; i++)
	{
		if(inStr[i] != ' ')
		{
			newStr[position] = inStr[i];
			position++;
		}
	}

	newStr[position] = '\0';
	return newStr;
}

int main(void)
{
	char inStr[] = "Moebius ist ein dicker Frosch";

	printf("%s\n", removeSpaces(inStr));

	return 0;
}