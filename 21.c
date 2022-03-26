#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// Convert decimal to binary;

int *to_binary(int x);
int size;

int main() {
	int *p;
	int x;
	printf("Welcome to A Decimal-Binary Programme");
	printf("Input positive value (up to 2^32-1): ");
	scanf("%d", &x);

	p = to_binary(x);
	printf("Binary: ");
	for (int j=size-1;j>=0;j--) {
		printf("%d", *(p+j));
	}
	return 0;
}

int *to_binary(int x) {
	static int arr[32];
	size = 0;
	while (x > 0) {
		arr[size] = x%2;
		x = x/2;
		size++;
	}
	return arr;
}

