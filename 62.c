#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
//Write a program in c to create a text file .write contents using fwrite and read from file using fread

typedef struct Student {
	char full_name[40];
	char std_id[5];
	int age;
} students;

int main() {

	FILE *file;
	int n;

	file = fopen("test.txt", "wb");

	printf("\n\n--- This programme is about creating a student's record ---\n\n");

	printf("How many students do you want to record?\n");
	printf("Input: ");
	scanf(" %d", &n);

	students student[n];

	for (int i=0;i<n;i++) {
		printf("\n-- STUDENT %d --\n", i+1);
		printf("Enter a student's full name: ");
		scanf(" %[^\n]s", &student[i].full_name);
		printf("Enter a student's id: ");
		scanf(" %s", &student[i].std_id);
		printf("Enter a student's age: ");
		scanf(" %d", &student[i].age);
		fwrite(&student, sizeof(student), 1, file);
	}

	


	fclose(file);
	return 0;
}

