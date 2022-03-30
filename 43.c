#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in c to sort element of array in ascending order. 

// fixed array's size
#define SIZE 10

void to_continue();
void bubble_sort(int *arr);

int main() {

	static int arr[SIZE];

	printf("\n--- Sort Elements of An Array in An Ascending Order ---\n");
	printf("First make your own array of numbers\n");
	printf("Note that: The array's size is 10\n");
	for (int i=0;i<SIZE;i++){
		printf("\nInput a number (only positive integer): ");
		scanf(" %d", &arr[i]);
	}

	printf("\nThe sorted array is shown below\n");
	bubble_sort(arr);
	for (int i=0;i<SIZE;i++) {
		printf("%d ", arr[i]);
	}
	
	to_continue();
	return 0;
}

void bubble_sort(int *arr) {
	int t;
	for (int i=0;i<SIZE;i++) {
		for (int j=0;j<SIZE-i-1;j++) {
			if (arr[j] > arr[j+1]) {
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void to_continue() {
	char choice;
	printf("\nDo you want to continue? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		int arr[SIZE];
		main();
	} else {
		printf("Good Bye!");
	}
}
