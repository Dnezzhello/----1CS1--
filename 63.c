#include <stdio.h>
#include <stdlib.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
//Write a program to demonstrate fseek and rewind.

int main() {
	FILE *file;
	char str[30], c;
	int check, n;

	printf("\n\n--- This programme will show the main difference between fseek() and rewind() in C ---\n\n");
	printf("\t1. fseek() will return 0 if successful\n");
	printf("\t2. rewind() will not return anything\n\n");

	printf("First you need to create a file\n\n");
	printf("Please follow the upcoming instructions\n");

	printf("Please enter your full name: ");
	scanf("%[^\n]s", str);

	// create and open file
	file = fopen("test.txt", "w+");

	// write content to the file
	if(fprintf(file, "%s %s", "Your name is", str)) {
		printf("\nThe content was written to the file succesfully\n");
	} else {
		printf("ERROR!\n");
		exit(1);
	}

	// fseek() or rewind()
	printf("\nDo you want to use fseek() or rewind()?\n");
	printf("Input an integer: 1 for fseek() | 2 for rewind()\n");
	scanf(" %d", &n);
	switch (n) {
		case 1:
			check = fseek(file, 0, SEEK_SET);
			if (!check) {
				printf("\nvalue returned from fseek(): %d, signifying the success\n", check);
				printf("\n--> The pointer's position has been reset to the beginning of the file\n\n");
			} else {
				printf("ERROR CANNOT RESET THE POSITION OF THE POINTER\n");
				exit(1);
			}
			break;
		case 2:
			rewind(file);
			printf("\n--> The pointer's position has been reset to the beginning of the file\n");
			printf("Note that: You can see that nothing is returned from rewind()\n\n");
			break;
		default:
			printf("your input is incorrect");
			exit(1);
	}

	// show the content

	printf("-- The content in the file will be shown below --\n\n\t");
	while (1) {
		c = fgetc(file);
		if (feof(file)) {
			break;
		}
		printf("%c", c);
	}
	printf("\n");

	fclose(file);

	return 0;
}

