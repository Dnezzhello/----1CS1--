#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// sum of two numbers using 4th type of function

float sum_of_two_n(float x, float y) {
	return x + y;
}

int main() {
	char choice;
	float x, y;

	printf("\nSum of two numbers\n");
	printf("Input x: ");
	scanf(" %f", &x);
	printf("Input y: ");
	scanf(" %f", &y);
	printf("The sum of %.3f and %.3f is %.2f", x, y, sum_of_two_n(x, y));
	

	printf("\nDo you want to continue? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
	return 0;
}




