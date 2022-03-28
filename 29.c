#include <stdio.h>
#include <math.h>
#include <ctype.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// maths and character library function using switch case

void maths();
void character();

int main() {
	char choice;
	printf("maths library function or character library function?\n");
	printf("Enter 'm' for maths or 'c' for character: ");
	scanf(" %c", &choice);

	switch (choice) {
		case 'm':
			maths();
			break;
		case 'c':
			character();
			break;
		default:
			printf("What you've just entered is invalid.");
			break;
	}
	return 0;
}

void maths() {
	int x;
	float y;
	printf("\nPlease enter a number to learn about maths function in c.\n");
	printf("\nFirst input flaoting point number: ");
	scanf(" %f", &y);
	printf("Second input an integer: ");
	scanf(" %d", &x);

	printf("\nceil(%.2f) --> %.2f\n", y, ceil(y));
	printf("floor(%.2f) --> %.2f\n", y, floor(y));
	printf("sqrt(%d) --> %.2f\n", x, sqrt(x));
	printf("pow(%f, 2) --> %.2f\n", y, pow(y, 2));
	printf("abs(-%d) --> %d\n", x, abs(x));
}

void character() {
	char c;
	printf("Please input either a number or alphabet: ");
	scanf(" %c", &c);

	if (isalnum(c)) {
		printf("\nalphanumeric(%c) --> %c is alphanumric\n", c, c);
	} else {
		printf("alphanumeric(%c) --> %c is not alphanumric\n", c, c);
	}

	if (isalpha(c)) {
		printf("alpha(%c) --> %c is alphabetic\n", c, c);
	} else {
		printf("alpha(%c) --> %c is not alphabetic\n", c, c);
	}

	if (islower(c)) {
		printf("islower(%c) --> %c is a lowercase letter\n", c, c);
	} else {
		printf("islower(%c) --> %c is not a lowercase letter\n", c, c);
	}

	if (isupper(c)) {
		printf("isupper(%c) --> %c is an uppercase letter\n", c, c);
	} else {
		printf("isupper(%c) --> %c is not an uppercase letter\n", c, c);
	}

	if (isspace(c)) {
		printf("isspace(%c) --> %c is white-space\n", c, c);
	} else {
		printf("isspace(%c) --> %c is not white-space\n", c, c);
	}
}
