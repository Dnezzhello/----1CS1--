#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a c program to demonstrate structure of array

struct Student {
	char first_name[20];
	char last_name[20];
	int id;
};

void to_continue();
void print();

int main() {

	struct Student std[3];
	
	printf("--- Array of Structure in C ---\n");
	printf("This programme will need to enter student's information 3 times in a row\n");
	for (int i=0;i<3;i++) {
		printf("---   ---\n");
		printf("Student %d\n", i+1);
		printf("first name: ");
		scanf("%s", std[i].first_name);
		printf("last name: ");
		scanf("%s", std[i].last_name);
		printf("student's id: ");
		scanf("%d", &std[i].id);
	};

	printf("\n--- STUDENT INFORMATION ---\n");
	for (int i=0;i<3;i++) {
		printf("\n-- Student %d --\n", i+1);
		print(std[i]);
	}

	to_continue();
	return 0;
}

void print(struct Student std) {
	printf("Student's ID: %d\n", std.id);
	printf("Full name: %s %s\n", std.first_name, std.last_name);
}

void to_continue() {
	char choice;
	printf("\nDo you want to try again? (y or n)\n");
	printf("Input: ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else {
		printf("Good Bye!");
	}
};



