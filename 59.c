#include <stdio.h>
#include <stdlib.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// Write a c program to read and print the student details using structure and Dynamic  memory Allocation by using malloc()

struct Student {
	char std_id[10];
	char name[30];
	char surname[30];
} *ps;

int main() {
	int n;

	ps = (struct Student*) malloc(n * sizeof(struct Student));
	
	printf("How many students do you want to create?\n");
	printf("Input: ");
	scanf("%d", &n);

	for (int i=0;i<n;i++) {
		printf("\n\n---- This is for student %d ----\n\n", i+1);
		printf("Please enter the student's name: ");
		scanf("%s", (ps+i)->name);
		printf("Please enter the student's surname: ");
		scanf("%s", (ps+i)->surname);
		printf("Please enter the student's ID: ");
		scanf("%s", (ps+i)->std_id);
	}

	printf("\n\n---- This is the student's information you've just entered ----\n\n");
	for (int i=0;i<n;i++) {
		printf("-- Student %d --\n", i+1);
		printf("Full Name: %s %s\n", (ps+i)->name, (ps+i)->surname);
		printf("Student's ID: %s\n", (ps+i)->std_id);
	}

	free(ps);
	return 0;
}
