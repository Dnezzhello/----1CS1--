#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// A comparison between two numbers using ternary operator

int main() {
	int a, b;
	char c[20];

	printf("Enter a value for 'a': ");
	scanf("%d", &a);
	printf("Enter a value for 'b': ");
	scanf("%d", &b);

	(a > b) ? printf("a is greater than b") : printf("b is greater than a");
	
}
