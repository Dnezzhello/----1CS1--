#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program to find factorial of a number using recursion

void to_continue();
unsigned long long int factorial(int x);

int main() {
	char choice;
	int x;
	printf("\n--- Factorial Calculator ---\n");
	printf("Input a positive number: ");
	scanf(" %d", &x);

	if (x < 0) {
		main();
	}

	printf("%d! is %llu", x, factorial(x));
	
	to_continue();
	return 0;
}

unsigned long long int factorial(int x) {
	return (x==1) ? 1 : x*factorial(x-1);
}



void to_continue() {
	char choice;
	printf("\nDo you want to continue? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
}



