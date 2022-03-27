#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// a character pattern in a trianglar shape

int main() {
	int n;
	char c = 'A';
	printf("Input a positive number: ");
	scanf("%d", &n);

	printf("\n");
	for (int i=1;i<=n;i++) {

		for (int j=0;j<i;j++) {
			printf("%c\t", c+j);
		}

		printf("\n\n\n");
	}
	
	return 0;
}
