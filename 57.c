#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
//  a program in c to show the pointer to pointer

int main() {

	int arr[2] = {1, 2};
	int *p[] = {arr, arr+1};
	int **pp = p;
	printf("--- An Example to Show How Pointer to Pointer in C Works ---\n\n");
	printf("arr[2] = {1, 2}\n");
	printf("*p[] = {arr, arr+1}\n");
	printf("**pp = p\n\n");

	printf("This pointer array contains an address of each element of the array\n");
	printf("p[0] --> %x\n", p[0]);
	printf("p[1] --> %x\n\n", p[1]);

	printf("This pointer to pointer variable contains an address of the pointer array\n");
	printf("**p --> %x", pp);
	return 0;
}
