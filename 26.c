#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// a pattern of a trianglar shape

int main() {
	int n;
	printf("Input a positive number: ");
	scanf("%d", &n);

	printf("\n");
	for (int i=1;i<=n;i++) {

		for (int j=n-1;j>=i;j--) {
			printf("\t");		
		}

		for (int j=1;j<=i;j++) {
			printf("*\t\t");
		}

		printf("\n\n\n");
	}
	
	return 0;
}
