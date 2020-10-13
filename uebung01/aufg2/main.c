#include <stdio.h>
#include "doSort.h"

int main(int argc, const char * argv[])
{
	int data[] = {34, 32, 12, 55, 67, 2, 42, 21};
	int cnt = sizeof(data)/sizeof(int);

	for (int i=0; i<cnt; ++i)
		printf("%3d ", data[i]);
	printf("\n");

	doSort(data, cnt);

	for (int i=0; i<cnt; ++i)
		printf("%3d ", data[i]);

	return 0;
}