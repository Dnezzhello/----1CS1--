#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// the use of static variable

int s;
int *make_arr() {
	printf("\nInsert a positive number to create an array of consecutive numbers up to 100: ");
	scanf(" %d", &s);
	static int arr[40];
	for (int i=1;i<=s;i++) {
		arr[i-1] = i;
	}
	return arr;
}

int main() {

	int *p;
	p = make_arr();
	for (int i=0;i<s;i++) {
		printf("arr[%d] = %d\n", i, i+1);
	}
	return 0;
}

