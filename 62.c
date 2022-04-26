#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
//Write a program in c to create a text file .write contents using fwrite and read from file using fread

struct Student {
	char full_name[40];
	char std_id[5];
	int age;
};

int main() {

	FILE *file;
	int n, check, count = 1;
	

	file = fopen("test.dat", "w+");

	if (file == NULL) {
		printf("The file cannot either be created or opened properly\n");
		exit(1);
	}

	printf("\n\n--- This programme is about creating a student's record ---\n\n");

	printf("How many students do you want to record?\n");
	printf("Input: ");
	scanf(" %d", &n);

	struct Student student, s;

	for (int i=0;i<n;i++) {
		printf("\n-- STUDENT %d --\n", i+1);

		fflush(stdin);

		printf("Enter a student's full name: ");
		gets(student.full_name);
		printf("Enter a student's id: ");
		gets(student.std_id);
		printf("Enter a student's age: ");
		scanf(" %d", &student.age);
		check = fwrite(&student, sizeof(struct Student), 1, file);
	}

	if (check == 1) {
		printf("\nThe content was written succesfully\n");
	} else {
		printf("Error! Cannot write the content into the file\n");
	}

	//read file and show the content 
	fseek(file, 0, SEEK_SET);
	
	while (fread(&s, sizeof(struct Student), 1, file)) {
		printf("\n\n -- Student %d -- \n\n", count);
		printf("Student's name: %s\n", s.full_name);
		printf("Student's id: %s\n", s.std_id);
		printf("Student's age: %d", s.age);
		count++;
	}

	fclose(file);
	return 0;
}
