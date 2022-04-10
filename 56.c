#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program to sum of two no using pointer

float sum();
void to_continue();

int main() {
	float x, y;

	printf("Enter a value for x and y (separated by a space):");
	scanf("%f %f", &x, &y);
	printf("The sum of %.2f and %.2f is %.2f", x, y, sum(&x, &y));

	return 0;
}

float sum(float *x, float *y) {
	return *x + *y;
}

void to_continue() {
	char choice;
	printf("\nDo you want to try again? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
};
