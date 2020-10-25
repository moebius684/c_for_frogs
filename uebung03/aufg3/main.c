#include <stdio.h>

int main(void)
{
	
	printf("INT:    %ld BYTE %ld BIT\n", sizeof(int), sizeof(int)*8);
	printf("FLOAT:  %ld BYTE %ld BIT\n", sizeof(float), sizeof(float)*8);
	printf("DOUBLE: %ld BYTE %ld BIT\n", sizeof(double), sizeof(double)*8);
	printf("CHAR:   %ld BYTE  %ld BIT\n", sizeof(char), sizeof(char)*8);
	printf("SHORT:  %ld BYTE %ld BIT\n", sizeof(short), sizeof(short)*8);
	printf("LONG:   %ld BYTE %ld BIT\n", sizeof(long), sizeof(long)*8);

/*
INT:    4 BYTE 32 BIT
FLOAT:  4 BYTE 32 BIT
DOUBLE: 8 BYTE 64 BIT
CHAR:   1 BYTE  8 BIT
SHORT:  2 BYTE 16 BIT
LONG:   8 BYTE 64 BIT
*/

	printf("+UNSIGNED+++++++++++++++++++++++\n");
	printf("UNSIGNED INT:    %ld BYTE %ld BIT\n", sizeof(unsigned int), sizeof(unsigned int)*8);
//	printf("UNSIGNED FLOAT:  %ld BYTE %ld BIT\n", sizeof(unsigned float), sizeof(unsigned float)*8);
//	printf("UNSIGNED DOUBLE: %ld BYTE %ld BIT\n", sizeof(unsigned double), sizeof(unsigned double)*8);
	printf("UNSIGNED CHAR:   %ld BYTE  %ld BIT\n", sizeof(unsigned char), sizeof(unsigned char)*8);
	printf("UNSIGNED SHORT:  %ld BYTE %ld BIT\n", sizeof(unsigned short), sizeof(unsigned short)*8);
	printf("UNSIGNED LONG:   %ld BYTE %ld BIT\n", sizeof(unsigned long), sizeof(unsigned long)*8);

/*
UNSIGNED INT:    4 BYTE 32 BIT
UNSIGNED CHAR:   1 BYTE  8 BIT
UNSIGNED SHORT:  2 BYTE 16 BIT
UNSIGNED LONG:   8 BYTE 64 BIT
*/

	printf("+LONG+++++++++++++++++++++++++++\n");
	printf("LONG INT:     %ld BYTE  %ld BIT\n", sizeof(long int), sizeof(long int)*8);
//	printf("FLOAT:  %ld BYTE %ld BIT\n", sizeof(long float), sizeof(long float)*8);
	printf("LONG DOUBLE: %ld BYTE %ld BIT\n", sizeof(long double), sizeof(long double)*8);
//	printf("CHAR:   %ld BYTE %ld BIT\n", sizeof(long char), sizeof(long char)*8);
//	printf("SHORT: %ld BYTE %ld BIT\n", sizeof(long short), sizeof(long short)*8);
	printf("LONG LONG:    %ld BYTE  %ld BIT\n", sizeof(long long), sizeof(long long)*8);

/*
LONG INT:     8 BYTE  64 BIT
LONG DOUBLE: 16 BYTE 128 BIT
LONG LONG:    8 BYTE  64 BIT
*/

	printf("+SHORT++++++++++++++++++++++++++\n");
	printf("SHORT INT:    %ld BYTE %ld BIT\n", sizeof(short int), sizeof(short int)*8);
//	printf("SHORT FLOAT:  %ld BYTE %ld BIT\n", sizeof(short float), sizeof(short float)*8);
//	printf("SHORT DOUBLE: %ld BYTE %ld BIT\n", sizeof(short double), sizeof(short double)*8);
//	printf("SHORT CHAR:   %ld BYTE  %ld BIT\n", sizeof(short char), sizeof(short char)*8);
//	printf("SHORT SHORT:  %ld BYTE %ld BIT\n", sizeof(short short), sizeof(short short)*8);
//	printf("SHORT LONG:   %ld BYTE %ld BIT\n", sizeof(short long), sizeof(short long)*8);

/*
SHORT INT:    2 BYTE 16 BIT
*/

	printf("+UNSIGNED LONG++++++++++++++++++\n");
	printf("UNSIGNED LONG INT:  %ld BYTE %ld BIT\n", sizeof(unsigned long int), sizeof(unsigned long int)*8);
	printf("UNSIGNED LONG LONG: %ld BYTE %ld BIT\n", sizeof(unsigned long long), sizeof(unsigned long long)*8);

/*
UNSIGNED LONG INT:  8 BYTE 64 BIT
UNSIGNED LONG LONG: 8 BYTE 64 BIT
*/

	printf("+UNSIGNED SHORT+++++++++++++++++\n");
	printf("UNSIGNED SHORT INT:  %ld BYTE %ld BIT\n", sizeof(unsigned long int), sizeof(unsigned long int)*8);

/*
UNSIGNED SHORT INT:  8 BYTE 64 BIT
*/


	return(0);
}