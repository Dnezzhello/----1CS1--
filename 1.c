#include <stdio.h>
#include <limits.h>

/*1CS1 Souphaxay Naovalath*/

int main() {
	// char type
	char a = 'a';
	unsigned char b = 'b';
	signed char c = 'c';

	// integer type
	int d = 2147483647;
	unsigned int e = 4294967295;
	short f = 32767;
	unsigned short g = 65535;
	long h;
	unsigned long i;

	// float type
	float j = 22.0/7;
	double k = 22.0/7;
	long double l = 22.0/7;

	printf("\nThis is all about the information regarding data type in C.\n");

	printf("\nThese lines below are related to 'char' type.\n");
	printf("char --> %c\n", a);
	printf("unsigned char --> %c\n", b);
	printf("signed char --> %c\n", c);

	printf("\nThese lines below are related to 'integer' type.\n");
	printf("int --> %d\n", d);
	printf("unsigned int --> %u\n", (unsigned int)e);
	printf("short --> %d\n", f);
	printf("unsigned short --> %d\n", g);
	printf("long --> %ld\n", (long) LONG_MAX);
	printf("unsigned long--> %lu\n", (unsigned long) ULONG_MAX);

	printf("\nThese lines below are related to 'float' type.\n");
	printf("float --> %.6f\n", j);
	printf("double --> %.15lf\n", k);
	printf("long double --> %.19Lf\n", l);
	return 0;
}
