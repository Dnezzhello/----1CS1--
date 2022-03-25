#include <stdio.h>
#include <math.h>
/*1CS1 Souphaxay Naovalath*/
// Prime number or not

int is_prime(int x) {
	if (x == 1) {return 0;}
	if (x == 2) {return 1;}
	for (int i=2;i<=ceil(sqrt(x));i++) {
		if (x%i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}

int main() {
	int x;
	printf("Check if your given number is prime or not: ");
	scanf(" %d", &x);
	is_prime(x) ? printf("%d is a prime number", x) : printf("%d is not a prime number", x);	
	return 0;
}
