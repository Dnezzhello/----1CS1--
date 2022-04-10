#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in c to find the maximum number between two number using pointers

void to_continue();

int main() {

	float x, y;
	float *p1, *p2;

	printf("Enter a value for X: ");
	scanf("%f", &x);
	printf("Enter a value for Y: ");
	scanf("%f", &y);

	p1 = &x;
	p2 = &y;

	if (*p1 > *p2) {
		printf("%.2f > %.2f, so X is the maximum value", x, y);
	} else {
		printf("%.2f < %.2f, so Y is the maximum value", x, y);
	}

	to_continue();
	return 0;
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
