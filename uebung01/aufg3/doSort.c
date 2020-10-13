#include "doSort.h"

static void swap(int *a, int *b)
{
	int zwsp;
	zwsp = *a;
	*a = *b;
	*b = zwsp;
}

void doSort(int aField[], int cnt)
{
	for (int i=0; i<cnt; ++i)
	{
		for (int j=1; j<cnt-i; ++j)
		{
			if (aField[j-1] > aField[j])
				swap(&aField[j-1],&aField[j]);
		}
	}
}