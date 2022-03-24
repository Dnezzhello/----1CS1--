#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Simple Interest Calculator

float simple_interest(int year, float initial, float rate);
int main() {
	int year;
	float initial, rate;
	printf("\nInitial amount of money: ");
	scanf(" %f", &initial);
	printf("year: ");
	scanf(" %d", &year);
	printf("rate (in percent): ");
	scanf(" %f", &rate);

	printf("Final amount: %.4f", simple_interest(year, initial, rate));
	return 0;
}

float simple_interest(int year, float initial, float rate) {
	return initial*(1 + year * rate/100);
}
