#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in c to search an element from an array by linear search method

// fixed array's size
#define SIZE 10

void to_continue();
int linear_search(int *arr, int element);
int is_equal(int x, int y);

int main() {

	int x;
	int arr[SIZE] = {2, 5, 3, 4, 6, 1, 9, 7, 8, 10};
	
	printf("\n--- Linear Search Operation ---\n");
	printf("This is our array of numbers\n");
	printf("[");
	for (int i=0;i<10;i++) {
		printf(" %d", arr[i]);
	}
	printf(" ]");
	printf("\nInput a number (1-10) to search for the element if it's in the array: ");
	scanf(" %d", &x);

	for (int i=0;i<SIZE;i++) {
		printf("\narr[%d] == %d --> ", i, x);
		(is_equal(arr[i], x) == 1) ? printf("true") : printf("false");
	}

	if (linear_search(arr, x)) {
		printf("\n\nThe element is in the array");
	} else {
		printf("\n\nThe elment is not in the array");
	}
	
	to_continue();
	return 0;
}

int linear_search(int *arr, int element) {
	for (int i=0;i<SIZE;i++) {
		if (arr[i] == element) {
			return 1;
		}
	}
	return 0;
}

int is_equal(int x, int y) {
	return (x == y) ? 1 : 0;
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
