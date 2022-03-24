#include <stdio.h>

/* 1CS1 Souphaxay Naovalath */
// Month number to its name

int main() {
	int m;
	printf("This will show a month's name based on a given number (1-12)\n");
	printf("Input: ");
	scanf("%d", &m);

	switch (m) {
		case 1:
			printf("January");
			break;
		case 2:
			printf("Febuary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("The input is out of range.");
			break;
	}
	return 0;
}
