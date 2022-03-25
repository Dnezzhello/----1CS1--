#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// go to statement

int main() {
	int x;
	printf("Input a positive integer to check if it is even number: ");
	scanf(" %x", &x);

	if (x%2 == 0) {
		goto even;
	} else {
		goto not_even;
	}

	even:
		printf("This is an even number.");
		return 0;
	not_even:
		printf("This is not an even number.");

	return 0;
}
