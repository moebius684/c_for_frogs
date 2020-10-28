#include <stdio.h>

int stupidromansiii(char stupidromans[], int stupidromansposition)
{
	//ignoring III -> IIV, XXX -> XXL, CCC -> CCD because that would make the roman empire very sad :(
	for(int i = 1; i < stupidromansposition - 3; i++) //VIII -> IIX
	{
		if(stupidromans[i] == 'V' && stupidromans[i+1] == 'I' && stupidromans[i+2] == 'I' && stupidromans[i+3] == 'I')
		{
			stupidromans[i] = 'I';
			stupidromans[i+1] = 'I';
			stupidromans[i+2] = 'X';
			for(int j = i+3; j < stupidromansposition; j++)
			{
				stupidromans[j] = 'A';
			}
			stupidromansposition -= 1;
		}
	}

	for(int i = 1; i < stupidromansposition - 3; i++) //LXXX -> XXC
	{
		if(stupidromans[i] == 'L' && stupidromans[i+1] == 'X' && stupidromans[i+2] == 'X' && stupidromans[i+3] == 'X')
		{
			stupidromans[i] = 'X';
			stupidromans[i+1] = 'X';
			stupidromans[i+2] = 'C';
			for(int j = i+3; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+1];
			}
			stupidromansposition -= 1;
		}
	}

	for(int i = 1; i < stupidromansposition - 3; i++) //DCCC -> CCM
	{
		if(stupidromans[i] == 'D' && stupidromans[i+1] == 'C' && stupidromans[i+2] == 'C' && stupidromans[i+3] == 'C')
		{
			stupidromans[i] = 'C';
			stupidromans[i+1] = 'C';
			stupidromans[i+2] = 'M';
			for(int j = i+3; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+1];
			}
			stupidromansposition -= 1;
		}
	}

	return stupidromansposition;
}

int stupidromansii(char stupidromans[], int stupidromansposition)
{
	for(int i = 1; i < stupidromansposition - 4; i++) //VIIII -> IX
	{
		if(stupidromans[i] == 'V' && stupidromans[i+1] == 'I' && stupidromans[i+2] == 'I' && stupidromans[i+3] == 'I' && stupidromans[i+4] == 'I')
		{
			stupidromans[i] = 'I';
			stupidromans[i+1] = 'X';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = 'A';
			}
			stupidromansposition -= 3;
		}
	}

	for(int i = 1; i < stupidromansposition - 3; i++) //IIII -> IV
	{
		if(stupidromans[i] == 'I' && stupidromans[i+1] == 'I' && stupidromans[i+2] == 'I' && stupidromans[i+3] == 'I')
		{
			stupidromans[i+1] = 'V';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = 'A';
			}
			stupidromansposition -= 2;
		}
	}

	for(int i = 1; i < stupidromansposition - 4; i++) //LXXXX -> XC
	{
		if(stupidromans[i] == 'L' && stupidromans[i+1] == 'X' && stupidromans[i+2] == 'X' && stupidromans[i+3] == 'X' && stupidromans[i+4] == 'X')
		{
			stupidromans[i] = 'X';
			stupidromans[i+1] = 'C';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+3];
			}
			stupidromans -= 3;
		}
	}

	for(int i = 1; i < stupidromansposition - 3; i++) //XXXX -> XL
	{
		if(stupidromans[i] == 'X' && stupidromans[i+1] == 'X' && stupidromans[i+2] == 'X' && stupidromans[i+3] == 'X')
		{
			stupidromans[i] = 'X';
			stupidromans[i+1] = 'L';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+2];
			}
			stupidromans -= 2;
		}
	}

	for(int i = 1; i < stupidromansposition - 4; i++) //DCCCC -> CM
	{
		if(stupidromans[i] == 'D' && stupidromans[i+1] == 'C' && stupidromans[i+2] == 'C' && stupidromans[i+3] == 'C' && stupidromans[i+4] == 'C')
		{
			stupidromans[i] = 'C';
			stupidromans[i+1] = 'M';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+3];
			}
			stupidromans -= 3;
		}
	}

	for(int i = 1; i < stupidromansposition - 3; i++) //CCCC -> CD
	{
		if(stupidromans[i] == 'C' && stupidromans[i+1] == 'C' && stupidromans[i+2] == 'C' && stupidromans[i+3] == 'C')
		{
			stupidromans[i] = 'C';
			stupidromans[i+1] = 'D';
			for(int j = i+2; j < stupidromansposition; j++)
			{
				stupidromans[j] = stupidromans[j+2];
			}
			stupidromans -= 2;
		}
	}

	return stupidromansposition;
}

void constructthefunnynumber(int romanstuff, char stupidromans[], int stupidromansposition)
{
	switch(romanstuff)
	{
		case 1000:	stupidromans[stupidromansposition] = 'M';
					break;
		case 500:	stupidromans[stupidromansposition] = 'D';
					break;
		case 100:	stupidromans[stupidromansposition] = 'C';
					break;
		case 50:	stupidromans[stupidromansposition] = 'L';
					break;
		case 10:	stupidromans[stupidromansposition] = 'X';
					break;
		case 5:		stupidromans[stupidromansposition] = 'V';
					break;
		case 1:		stupidromans[stupidromansposition] = 'I';
					break;																									
	}
}

int stupidromansi(int stupidarabs, char stupidromans[], int stupidromansposition)
{
	while(stupidarabs > 0)
	{
		if(stupidarabs >= 1000)
		{
			stupidarabs -= 1000;
			constructthefunnynumber(1000, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 500)
		{
			stupidarabs -= 500;
			constructthefunnynumber(500, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 100)
		{
			stupidarabs -= 100;
			constructthefunnynumber(100, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 50)
		{
			stupidarabs -= 50;
			constructthefunnynumber(50, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 10)
		{
			stupidarabs -= 10;
			constructthefunnynumber(10, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 5)
		{
			stupidarabs -= 5;
			constructthefunnynumber(5, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
		else if(stupidarabs >= 1)
		{
			stupidarabs -= 1;
			constructthefunnynumber(1, stupidromans, stupidromansposition);
			stupidromansposition += 1;
		}
	}
	return stupidromansposition;
}

void printthefunnyromannumber(char stupidromans[], int stupidromansposition)
{
	_Bool printit = 1;
	int cnt = 1;
	while(printit)
	{
		if(stupidromans[cnt] != 'A')
		{
			printf("%c", stupidromans[cnt]);
			cnt += 1;
		}
		else
		{
			printit = 0;
		}
	}
	printf(" ");
}

int main(void)
{
	int stupidarabs = 1;
	char stupidromans[50];
	
	while(stupidarabs <= 5000)
	{
		int stupidromansposition = 1;
	
		for(int i = 1; i <= 50; i++)
		{
			stupidromans[i] = 'A';
		}

		printf("%d:\n", stupidarabs);
		
		stupidromansposition = stupidromansi(stupidarabs, stupidromans, stupidromansposition);
		printthefunnyromannumber(stupidromans, stupidromansposition);

		stupidromansposition = stupidromansii(stupidromans, stupidromansposition);
		printthefunnyromannumber(stupidromans, stupidromansposition);

		stupidromansiii(stupidromans, stupidromansposition);
		printthefunnyromannumber(stupidromans, stupidromansposition);
		
		stupidarabs += 1;
		printf("\n");
	}

	return (0);
}

