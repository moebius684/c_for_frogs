#include <stdio.h>
#include <stdarg.h>

char *strcalAll(char *s1, ...)
{
	char *val;
	va_list vl;
	va_start(vl, *s1);


	for(int i=0; i<*s1; i++)
	{

		//strcpy 1mal (wahrsch vor for) strcat für den rest bis NULL
		//http://www.cplusplus.com/reference/cstdarg/va_start/
		val = va_arg(vl, char *);
		printf("%s\n", val);
	}
	va_end(vl);
}

int main(void)
{
	strcalAll("Oster", "hasen", "korb", NULL);
	//strcalAll("Hasen", "nase", NULL);
	//strcalAll("Ende", NULL);
	return (0);
}