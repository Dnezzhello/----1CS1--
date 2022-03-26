#include <stdio.h>
#include <math.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// armstrong number

int sum_of_cubed_digit(int x);
int is_armstrong_n(int x, int user_input);

int main() {
	int input;
	printf("Input a positive number to check if it is an armstrong number: ");
	scanf("%d", &input);
	if (is_armstrong_n(sum_of_cubed_digit(input), input)) {
		printf("%d is an armstrong number.", input);
	} else {
		printf("%d is not an armstrong number.", input);
	}
}

int sum_of_cubed_digit(int x) {
	int sum = 0;
	while (x != 0) {
		sum += pow(x%10, 3);
		x = x/10;
	}
	return sum;
}

int is_armstrong_n(int x, int user_input) {
	return (x == user_input) ? 1 : 0;
}

