#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// sum of digit

int main() {
	int x, sum, i;
	printf("Find sum of digit.\n");
	printf("Input (postive integer): ");
	scanf(" %d", &x);

	while (x != 0) {
		sum += x%10;
		x = x/10;
	}

	printf("The sum of its digits is: %d", sum);
	return 0;
}
