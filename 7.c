#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// A program to convert Centigrade to Fahrenheit

int main() {
	float t;
	printf("Enter a value for temperature in Celcius: ");
	scanf(" %f", &t);
	printf("Celcius: %.2f --> Fahrenheit: %.2f", t, 1.8*t+32);
}
