#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// a program to find sum of 10 natural no using 1-D array

int sum = 0;

void to_continue();
void make_arr_with_sum();

int main() {
	printf("\n--- Please input 10 natural numbers ---\n");
	make_arr_with_sum();
	printf("\nThe sum of these numbers is %d", sum);

	to_continue();
	return 0;
}

void make_arr_with_sum() {
	static int arr[10];

	for (int i=0;i<10;i++) {
		printf("number %d : ", i+1);
		scanf(" %d", &arr[i]);
		sum += arr[i];
	}
}

void to_continue() {
	char choice;
	printf("\nDo you want to continue? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		sum = 0;
		main();
	} else {
		printf("Good Bye!");
	}
}
