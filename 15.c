#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Area Calculator

#define PI 3.14159

float circle();
float rectangle();
float square();
float triangle();

int main() {
	int choice;
	printf("Welcome to Area Calculator.\n");
	printf("11 for circle\n22 for rectangle\n33 for square\n44 for triangle\n");
	printf("Input: ");
	scanf(" %d", &choice);
	switch (choice) {
		case 11:
			printf("The Area is %.2f", circle());
			break;
		case 22:
			printf("The Area is %.2f", rectangle());
			break;
		case 33:
			printf("The Area is %.2f", square());
			break;
		case 44:
			printf("The Area is %.2f", triangle());
			break;
		default:
			printf("Error!");
			break;
	}
}

float circle() {
	float r;
	printf("Input radius: ");
	scanf(" %f", &r);

	return PI*r*r;
}

float rectangle() {
	float l,w;
	printf("Input length: ");
	scanf(" %f", &l);
	printf("Input width: ");
	scanf(" %f", &w);

	return l*w;
}

float square() {
	float s;
	printf("Input side: ");
	scanf(" %f", &s);

	return s*s;
}

float triangle() {
	float b, h;
	printf("Assume that you want to calculate the area of a right triangle.\n");
	printf("Input base: ");
	scanf(" %f", &b);
	printf("Input height: ");
	scanf(" %f", &h);

	return b*h/2;
}
