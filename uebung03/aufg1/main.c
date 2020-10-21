#include <stdio.h>

int isPalNum(unsigned int aNum)
{
	int numberlength = 0;
	int numbertest = aNum;
//count number of digits
	while (numbertest > 0)
	{
		numbertest /= 10;
		numberlength += 1;
	}
//	printf("digits: %3d\n", numberlength);
//safe digits in array
	int digits[numberlength];

	for (int i = 0; i < numberlength; i++)
	{
		digits[i] = aNum % 10;
		aNum /= 10;
	}

//check for identical numbers
	int aNumA = 0;
	int aNumB = 0;
	int multiplikator = 1;

	for (int i = 0; i < numberlength; i++)
	{	
		aNumA += (digits[i] * multiplikator);
		aNumB += (digits[numberlength-1-i] * multiplikator);
		multiplikator = multiplikator * 10;
	}
//	printf("numberA: %3d\n", aNumA);
//	printf("numberB: %3d\n", aNumB);

	if (aNumA - aNumB == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int main(int argc, const char * argv[])
{
	int aNum = 1234321;

	if (isPalNum(aNum) == 1)
	{
		printf("%3d ist Palindrom\n", aNum);
	}
	if (isPalNum(aNum) == 0)
	{
		printf("%3d ist kein Palindrom\n", aNum);
	}

	return 0;
}

