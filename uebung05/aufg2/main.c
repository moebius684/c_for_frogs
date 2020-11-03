#include <stdio.h>

void searchminmax(int array[], int arraylength, int *min, int *max)//Signatur: searchminmax(int, int, int, int)
{
	*min = array[0];
	*max = array[0];

	for(int i = 1; i < arraylength; i++)
	{
		if(array[i] > *max)
		{
			*max = array[i];
		}
		if(array[i] < *min)
		{
			*min = array[i];
		}
	}
}

int main(void)
{
	int array[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int arraylength = sizeof(array)/sizeof(int);
	int min, max;

	searchminmax(array, arraylength, &min, &max);

	printf("MIN:%d MAX:%d\n", min, max);

	return (0);
}