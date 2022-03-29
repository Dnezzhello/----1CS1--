#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in C to read 10 numbers from keyboard and find their sum and  average

void to_continue();

int main() {
	char choice;
	
	float x, sum, i;

	printf("\n--- The sum of 10 numbers from keyboard ---\n");
	for (int i=0;i<10;i++) {
		printf("number %d : ", i+1);
		scanf(" %f", &x);
		sum += x;
	}

	printf("The sum is %.2f\n", sum);
	printf("The average is %.2f", sum/10.0);
	
	to_continue();
	return 0;
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
