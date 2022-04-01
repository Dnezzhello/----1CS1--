#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a program in c to perform addition of two matrix

void to_continue();

struct Matrix {
	int arr2[2][2];
	int arr3[3][3];
};

void print_arr(struct Matrix matrix, int size) {
	if (size == 2) {
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				printf("%d ", matrix.arr2[i][j]);
			}
			printf("\n");
		}
	} 
	
	if (size == 3) {
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				printf("%d ", matrix.arr3[i][j]);
			}
			printf("\n");
		}
	}	
};

struct Matrix make_arr(int size) {
	struct Matrix matrix;
	if (size == 2) {
		printf("\nfour numbers start from left to right and top to bottom\n");
		for (int i=0;i<size;i++) {
			for (int j=0;j<size;j++) {
				printf("Enter: ");
				scanf("%d", &matrix.arr2[i][j]);
			}
		}
	} 

	if (size == 3) {
		printf("\nnine numbers start from left to right and top to bottom\n");
		for (int i=0;i<size;i++) {
			for (int j=0;j<size;j++) {
				printf("Enter: ");
				scanf("%d", &matrix.arr3[i][j]);
			}
		}
	}
	return matrix;
 	
}

struct Matrix matrix_addition(struct Matrix matrix1, struct Matrix matrix2, int size) {
	struct Matrix new_matrix;
	if (size == 2) {
		for (int i=0;i<size;i++) {
			for (int j=0;j<size;j++) {
				new_matrix.arr2[i][j] = matrix1.arr2[i][j] + matrix2.arr2[i][j];
			}
		}
	}

	if (size == 3) {
		for (int i=0;i<size;i++) {
			for (int j=0;j<size;j++) {
				new_matrix.arr3[i][j] = matrix1.arr3[i][j] + matrix2.arr3[i][j];
			}
		}
	}
	return new_matrix;
}

int main() {
	int a;
	struct Matrix matrix1;
	struct Matrix matrix2;
	struct Matrix new_matrix;

	// input matrix's size
	printf("\n--- Addition of two matrices of integers ---\n");
	printf("Pleaser input matrix's size (2 for 2x2, 3 for 3x3)\n");
	scanf(" %d", &a);

	// make two matrices
	printf("You need to create 2 matrices\n");
	printf("\n-- First Matrix --");
	matrix1 = make_arr(a);
	printf("\n-- Second Matrix --");
	matrix2 = make_arr(a);

	// show the operation
	printf("\nYour first matrix is\n\n");
	print_arr(matrix1, a);
	printf("\nYour second matrix is\n\n");
	print_arr(matrix2, a);

	printf("\nThe result is\n\n");
	new_matrix = matrix_addition(matrix1, matrix2, a);
	print_arr(new_matrix, a);
	
	to_continue();
	return 0;
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
