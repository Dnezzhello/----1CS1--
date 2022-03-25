#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// sum of odd numbers between 1 to 10

int main() {
	int sum;
	for (int i=1;i<=10;i++) {
		if (i%2 == 0) {
			continue;
		} else {
			sum += i;
		}
	}
	printf("The sum of odd numbers between 1-10 is %d", sum);
}
