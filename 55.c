#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in c to find the sum of an array element using pointer and function

void to_continue();
int find_sum();
int * make_arr();

int main() {
	int *p, size;
	printf("\n\n--- Welcome to a programme to make an array of integers and find their sum using pointer and function ---\n\n");
	printf("Make your own array with the maximum size of 20\n");
	printf("Please enter how big do want your array to be: ");
	scanf("%d", &size);
	p = make_arr(size);
	printf("The sum is %d", find_sum(p, size));

	to_continue();
	return 0;
}

int * make_arr(int size) {
	static int arr[20];

	printf("Please enter integer(s) to make an array\n");

	for (int i=0;i<size;i++) {
		printf("arr[%d] --> ", i);
		scanf("%d", &arr[i]);
	}

	return arr;
}

int find_sum(int *arr, int size) {
	int *p, sum = 0;
	p = arr;
	for (int i=0;i<size;i++) {
		sum += *(p+i);
	}
	return sum;
}

void to_continue() {
	char choice;
	printf("\nDo you want to try again? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
};



