#include <stdio.h>
#include <string.h>
#include <unistd.h>

void stupidromansiii(int stupidarabs)
{

}

void stupidromansii(int stupidarabs)
{

}

void printthestupidshit(int romanstuff)
{
	switch(romanstuff)
	{
		case 1000:	printf("M");
					break;
		case 500:	printf("D");
					break;
		case 100:	printf("C");
					break;
		case 50:	printf("L");
					break;
		case 10:	printf("X");
					break;
		case 5:		printf("V");
					break;
		case 1:		printf("I");
					break;																									
	}
}

void stupidromansi(int stupidarabs)
{
	while(stupidarabs > 0)
	{
		if(stupidarabs >= 1000)
		{
			stupidarabs -= 1000;
			printthestupidshit(1000);
		}
		else if(stupidarabs >= 500)
		{
			stupidarabs -= 500;
			printthestupidshit(500);
		}

		else if(stupidarabs >= 100)
		{
			stupidarabs -= 100;
			printthestupidshit(100);
		}
		else if(stupidarabs >= 50)
		{
			stupidarabs -= 50;
			printthestupidshit(50);
		}
		else if(stupidarabs >= 10)
		{
			stupidarabs -= 10;
			printthestupidshit(10);
		}
		else if(stupidarabs >= 5)
		{
			stupidarabs -= 5;
			printthestupidshit(5);
		}
		else if(stupidarabs >= 1)
		{
			stupidarabs -= 1;
			printthestupidshit(1);
		}
	}
	printf("\n");
}

int main(void)
{
	int stupidarabs = 1985;
	stupidromansi(stupidarabs);
	//stupidromansii(stupidarabs);
	//stupidromansiii(stupidarabs);
	return (0);
}

