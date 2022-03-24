#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// A program to check whether or not a given year is a leap year

int leap_year(int x) {
	if (x%4 == 0) {
		if (x%100 != 0) {
			return 1;
		} else {
			if (x%400 == 0) {
				return 1;
			}
			return 0;
		}
	} 
	return 0;
}

int main() {
	printf("These are leap years between 1900 and 2000.\n");
	for (int i=1900;i<=2000;i+=4) {
		if (leap_year(i)) {
			printf("%d ", i);
		}
	}
}
