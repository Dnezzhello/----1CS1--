#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// A program to find the largest between three numbers

int main() {
	int x, y, z;
	printf("Input x: ");
	scanf(" %d", &x);
	printf("Input y: ");
	scanf(" %d", &y);
	printf("Input z: ");
	scanf(" %d", &z);

	if (x == y && x == z) {
		printf("They are all equal.\n");
	} else if (x > y) {
		if (x > z) {
			printf("x is the largest.");
		} else {
			printf("z is the largest.");
		}
	} else {
		if (y > z) {
			printf("y is the largest");
		} else {
			printf("z is the largest");
		}
	}
}
