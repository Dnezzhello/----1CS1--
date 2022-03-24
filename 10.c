#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// A program to check if a given number is odd or even

char* even_or_odd(int x) {
	if (x % 2 == 0) {
		return "even number";
	} else {
		return "odd number";
	}
}

int main() {
	int x;
	printf("Enter a number: ");
	scanf(" %d", &x);
	printf("%d an %s", x, even_or_odd(x));
}
