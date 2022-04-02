#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// a program to find Transpose of a matrix

struct Matrix {
	int arr[10][10];
};

void to_continue();
void print_arr(struct Matrix matrix, int row, int column);
struct Matrix make_arr(int row, int column);
struct Matrix transpose_of_matrix(struct Matrix matrix, int row, int column);

int main() {
	int row, column;
	struct Matrix matrix, transpose;
	printf("--- Welcome to a Programme to Find a Transpose of a Matrix ---\n");
	printf("The biggest size which is allowed to be entered is 10x10\n");
	printf("Input # of rows: ");
	scanf("%d", &row);
	printf("Input # of columns: ");
	scanf("%d", &column);

	matrix = make_arr(row, column);
	printf("/nYour matrix is here below: \n");
	print_arr(matrix, row, column);
	transpose = transpose_of_matrix(matrix, row, column);
	printf("\nThe transpose is here below: \n");
	print_arr(transpose, column, row);

	to_continue();
	return 0;
}


struct Matrix make_arr(int row, int column) {
	struct Matrix matrix;
	printf("\n%d numbers start from left to right and top to bottom\n", row*column);
	for (int i=0;i<row;i++) {
		for (int j=0;j<column;j++) {
			printf("Enter: ");
			scanf("%d", &matrix.arr[i][j]);
		}
	}
	return matrix;
}

void print_arr(struct Matrix matrix, int row, int column) {
	for (int i=0;i<row;i++) {
		for (int j=0;j<column;j++) {
			printf("%d ", matrix.arr[i][j]);
		}
		printf("\n");
	}	
};

struct Matrix transpose_of_matrix(struct Matrix matrix, int row, int column) {
	struct Matrix transpose;
	for (int i=0;i<row;i++) {
		for (int j=0;j<column;j++) {
			transpose.arr[j][i] = matrix.arr[i][j];
		}
	}
	return transpose;
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
};

