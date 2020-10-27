#include <stdio.h>

void searchmax(int magicarray[], int cnt)
{
	int solution[] = {0, 0}; //{x, y} x=number, y = frequency

	for(int i = 0; i < cnt; i++)
	{
		int testnumber = magicarray[i];
		int testnumbercounter = 0;
		
		for(int i = 0; i < cnt; i++)
		{
			if(testnumber == magicarray[i])
			{
				testnumbercounter += 1;
			}
		}
		
		if(testnumbercounter > solution[1])
		{
			solution[0] = testnumber;
			solution[1] = testnumbercounter;
		}
	}

	printf("NUM: %d FREQ: %d", solution[0], solution[1]);
}

int main(void)
{
	int magicarray[] = {1, 2, 3, 4, 5, 6, 7, 1, 2, 2};
	int cnt = sizeof(magicarray)/sizeof(int);

	searchmax(magicarray, cnt);

	return (0);
}