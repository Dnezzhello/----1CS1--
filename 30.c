#include <stdio.h>
#include <stdlib.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// command line arguments

unsigned long int factorial(int x) {
	if (x == 1) {
		return 1;
	}
	return factorial(x-1)*x;
}

int main(int argc, char *argv[]) {
	int x = atoi(argv[1]);
	printf("--- Factorial of A Given Number ---\n");
	printf("%d! = %lu", x, factorial(x));
	return 0;
} 

