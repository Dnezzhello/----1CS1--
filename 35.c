#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// Area of circle and area of rectangle using function return type

float circle(float r);
float rectangle(float l, float w);

int main() {
	char choice;
	float l, w, r;
	int shape;
	
	printf("\nCircle or Rectangle? (input 1 for circle | 2 for rectangle)\n");
	printf("Input: ");
	scanf(" %d", &shape);
	if (shape == 1) {
		printf("Input radius: ");
		scanf(" %f", &r);
		printf("The area of a circle with r = %.2f is %5.2f", r, circle(r));
	} else if (shape == 2) {
		printf("Input length: ");
		scanf(" %f", &l);
		printf("Input width: ");
		scanf(" %f", &w);
		printf("The area of a rectangle (length = %.2f, width = %.2f) is %5.2f", l, w, rectangle(l,w));
	} else {
		main();
	}

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

float circle(float r) {
	return 3.1415*r*r;
}

float rectangle(float l, float w) {
	return l*w;
}



