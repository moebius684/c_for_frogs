#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkforsort(int aux[], int cnt)
{
	for(int i=0; i<cnt-1; i++)
	{
		if(aux[i] > aux[i+1])
		{
			return(0);
		}
	}
	return(1);
}

void randomSort(int unsortedArray[], int cnt)
{
	_Bool issorted = 0;
	int iteration = 1;
	int aux[cnt];
	srand(time(0));
	for(int i = 0; i<cnt; i++)
	{
		aux[i] = -1;
	}
	aux[0] = 0;

	while(!issorted)
	{
		if(checkforsort(aux, cnt) == 1)
		{
			issorted = 1;
			printf("%d. Versuch: ", iteration);
			for(int i = 0; i<cnt; i++)
			{
				printf("%d ", aux[i]);
			}
		}
		else
		{
			iteration += 1;
			for(int i = 0; i<cnt; i++)
			{
				aux[i] = -1;
			}
			for(int i = 0; i<cnt; i++)
			{
				_Bool valueset = 0;
				while(!valueset)
				{
					int r = rand() % cnt;
					//printf("%d ", r);
					if(aux[r] == -1)
					{
						aux[r] = unsortedArray[i];
						valueset = 1;
					}
				}
			}
		}
	}
}

int main(void)
{
	int unsortedArray[] = {5, 3, 7, 2, 9, 6, 8, 4, 1};
	int cnt = sizeof(unsortedArray)/sizeof(int);

	randomSort(unsortedArray, cnt);

	return(0);
}