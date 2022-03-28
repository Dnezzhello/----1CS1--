#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// swapping 2 numbers using call by reference & call by value

void swap_call_by_value();
void swap_call_by_reference();

int main() {
	int x, y;
	printf("This is about to show how to swap 2 numbers by 2 methods.\n");
	printf("1. call by referce\n");
	printf("2. call by value\n");
	printf("Input two numbers\n");
	printf("x: ");
	scanf(" %d", &x);
	printf("y: ");
	scanf(" %d", &y);

	// call by reference
	printf("\nThis is about swapping using call by value\n");
	printf("before calling function\n");
	printf("x = %d | y = %d\n", x, y);
	printf("after calling function\n");
	swap_call_by_value(x, y);
	printf("x = %d | y = %d\n", x, y);

	// call by reference
	printf("\nThis is about swapping using call by reference\n");
	printf("before calling function\n");
	printf("x = %d | y = %d\n", x, y);
	printf("after calling function\n");
	swap_call_by_reference(&x, &y);
	printf("x = %d | y = %d\n", x, y);

	return 0;
} 

void swap_call_by_value(int x, int y) {
	int t = x;
	x = y;
	y = t;

	printf("This is inside a function\n");
	printf("x = %d | y = %d\n", x, y);
	printf("This is outside a function\n");
}

void swap_call_by_reference(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;

	printf("This is inside a function\n");
	printf("x = %d | y = %d\n", *x, *y);
	printf("This is outside a function\n");
}

