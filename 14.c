#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Multiplication Table

int main() {
	int x;

	printf("Welcome to Multiplication Table\n");
	printf("Input: ");
	scanf(" %d", &x);

	for(int i=1;i<=10;i++) {
		printf("%d * %d     = %d\n", x, i, x*i);
	}
}
