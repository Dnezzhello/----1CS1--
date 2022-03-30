#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//  a program to take input of 10 element, store and display it using one  Dimensional array

void to_continue();
int * make_arr();
void print_arr();

int main() {
	int *p;
	
	printf("--- Please input 10 numbers ---\n");

	p = make_arr();
	print_arr(p);
	to_continue();
	return 0;
}

int * make_arr() {
	static int arr[10];

	for (int i=0;i<10;i++) {
		printf("number %d : ", i+1);
		scanf(" %d", &arr[i]);
	}

	return arr;
}

void print_arr(int *arr) {
	printf("\n-- This is how your array looks like --\n");
	for (int i=0;i<10;i++) {
		printf("arr[%d] = %d\n", i, *(arr+i));
	}
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
