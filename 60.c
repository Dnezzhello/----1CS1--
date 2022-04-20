#include <stdio.h>
#include <stdlib.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// Write a program in c to create a float array dynamically using calloc().input values and  display

void to_continue();
float *make_arr();

int main() {

	int n, i;
	float *p;

	printf("\n\n--- Make a float array ---\n\n");
	printf("How big do you want your array to be? (1-10): ");
	scanf(" %d", &n);
	
	p = make_arr(n);
	printf("Your array is as follows: ");
	while (n > 0) {
		printf("%.2f ", *(p+i));
		n--;
		i++;
	}

	free(p);
	to_continue();
	return 0;
}

float *make_arr(int n) {

	float *arr;
	arr = (float*) calloc(n, sizeof(float));

	for (int i=0;i<n;i++) {
		printf("Element %d -> ", i+1);
		scanf("%f", &arr[i]);
	}
	return arr;
}

void to_continue() {
	char choice;
	printf("\nDo you want to try it again? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
};
