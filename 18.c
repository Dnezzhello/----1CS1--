#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Fibonacci Sequence

int main() {
	int first_term, second_term, next_term, terms;
	printf("How many terms of Fibonacci Sequence do you wanna see?\n");
	printf("Input: ");
	scanf(" %d", &terms);

	first_term = 0;
	second_term = 1;
	printf("0 1 ");
	for (int i=1;i<=terms;i++) {
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;

		printf("%d ", next_term);
	}
    return 0;
}
