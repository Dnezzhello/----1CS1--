#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
//Write a program in c to create a text file .write contents using fprintf and read from file  using fscanf


int main() {

	FILE *file;
	char data[300];
	char get_text[300];

	file = fopen("test.txt", "w+");

	printf("Please type something to insert it into our created file\n-> ");
	scanf("%[^\n]s", data);

	fprintf(file, data);
	// reset the position of a pointer
	rewind(file);

	while (fscanf(file, "%[^\n]s", get_text) != EOF) {
		printf("%s", get_text);
	}

	fclose(file);
}

