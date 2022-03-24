#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Average of three numbers

int main() {

	float x, y, z;
	printf("\nCalculate the average value of three numbers.\n");
	printf("input value for x: ");
	scanf("%f", &x);
	printf("input value for y: ");
	scanf("%f", &y);
	printf("input value for z: ");
	scanf("%f", &z);

	printf("The average is %.3f", (x+y+z)/3);
	return 0;
}
