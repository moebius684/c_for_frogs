#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	char *sep = ".,";
	char *part;

	strcpy(str, "Ra.bimmel, Ra.bammel, Ra.bum"); //Ra.bimmel Ra.bammel Ra.bum

	part = strtok(str, sep); //first call part=Ra\0
	while(part != NULL)
	{
		printf("%s\n", part); //1:"Ra" 2."bimmel" 3." Ra" 4."bammel" 5." Ra" 6."bum"
		part = strtok(NULL, sep); //subsequent call
	}

	return (0);
}

/*
Ra
bimmel
 Ra
bammel
 Ra
bum
*/