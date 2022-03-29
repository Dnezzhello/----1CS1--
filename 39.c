#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a c program to calculate power using recursion 

void to_continue();
float to_power(float base, int power);

int main() {
	char choice;
	float base;
	int power;

	printf("\n--- Power Calculator ---\n");
	printf("Input base: ");
	scanf(" %f", &base);
	printf("Input power (only integer): ");
	scanf(" %d", &power);

	printf("%.2f to power of %d is %.5f", base, power, to_power(base, power));
	
	to_continue();
	return 0;
}

float to_power(float base, int power) {
	if (power == 0) {
		return 1;
	}

	if (power < 0) {
		power = power * -1;
		return 1/(base*to_power(base, power-1));
	}

	return base*to_power(base, power-1);
}

void to_continue() {
	char choice;
	printf("\nDo you want to continue? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
}



