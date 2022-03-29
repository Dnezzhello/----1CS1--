#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// calculate volume through function

#define PI 3.1415

float cylinder();

int main() {
	char choice;
	int r, h;
	printf("Calculate Volume of a Cylinder\n");
	printf("Input r: ");
	scanf(" %d", &r);
	printf("Input h: ");
	scanf(" %d", &h);

	printf("The volume of the cylinder with r = %d and h = %d is %.2f", r, h, cylinder(r, h));
	
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

float cylinder(int r, int h) {
	return PI*r*r*h;
}

