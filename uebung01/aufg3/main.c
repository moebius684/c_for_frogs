#include <stdio.h>
#include "doSort.h"
#include "printOut.h"

int main(int argc, const char * argv[])
{
	int data[] = {7, 2, 2, 4, 2, 5, 1, 7};
	//int data[] = {};
	int cnt = sizeof(data)/sizeof(int);

	for (int i=0; i<cnt; ++i)
		printf("%3d ", data[i]);
	printf("\n");

	doSort(data, cnt);

	printf("value     #\n");

	printOut(data, cnt);

/*	int freq = 1;
	for (int i=0; i<cnt; ++i)
	{
		printf("%3d     ", data[i]);

		inc: if(data[i] != data[i+1])
		{
			printf("%3d \n", freq);
		}

		if(data[i] == data[i+1])
		{
			freq += 1;
			i += 1;
			goto inc;
		}
	}
*/	

	return 0;
}