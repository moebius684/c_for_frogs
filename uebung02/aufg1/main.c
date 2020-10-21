#include <stdio.h>
#include <stdbool.h>


int main(int argc, const char * argv[])
{
	int data1[] = {42, 21, 7, 5, 42, 21, 7};
	int cnt1 = sizeof(data1)/sizeof(int);

	int data2[] = {42, 21, 7, 5, 5, 21};
	int cnt2 = sizeof(data2)/sizeof(int);

	int data3[] = {42, 21, 3, 4, 5, 6, 7, 42, 21};
	int cnt3 = sizeof(data3)/sizeof(int);

	bool prepostfixfound = false;



	int limit_up = cnt1 - 1;
	int limit_down = (cnt1/2) - 1;

	while (limit_down >=)
	bool prepostfixbroken = false;
	int prepostlength = 0;

	while (!prepostfixbroken && limit_down >= 0)
	{
		if (data1[limit_down] == data1[limit_up])
		{
			prepostlength += 1;
			limit_up -= 1;
			limit_down -= 1;
		}
		else
		{
			prepostfixbroken = true;
		}
	}

	if (!prepostfixbroken)
	{
		printf("%3d\n", prepostlength);
	}

	printf("great success");










	for (int i=0; i<cnt1; ++i)
		printf("%3d ", data1[i]);
	printf("\n");

	for (int i=0; i<cnt1; ++i)
		printf("%3d ", data1[i]);

	return 0;
}