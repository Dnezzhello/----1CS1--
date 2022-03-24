#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Using Shift Left/Right

int main() {
	int x, a;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	printf("Shift by: ");
	scanf("%d", &a);
	printf("%d<<%d = %d\n",x, a, x<<a);
	printf("%d>>%d = %d",x, a, x>>a);
	
}
