#include "printOut.h"

void printOut(int aField[], int cnt)
{
	int freq = 1;
	for (int i=0; i<cnt; ++i)
	{
		printf("%3d     ", aField[i]);
		freq = 1;

		inc: if(aField[i] != aField[i+1])
		{
			printf("%3d \n", freq);
		}

		if(aField[i] == aField[i+1])
		{
			freq += 1;
			i += 1;
			goto inc;
		}
	}
}