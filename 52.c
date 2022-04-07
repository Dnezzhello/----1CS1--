#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a structure student having data members to store roll number, name of  student,name of three subjects, max marks.mim marks. 
// Declare a structure variable of a student provide facilities to input data in data member and display result of student

struct Student {
	char first_name[20];
	char last_name[20];
	char subjects[3][20];
	int id;
	float scores[3];
} student;

float max();
float min();

int main() {

	printf("--- A Programme Using struct in C ---\n");
	printf("This programme show an example related to a student\n");

	// id
	printf("Input a student's id (5 digits number): ");
	scanf("%d", &student.id);
	fgetc(stdin);
	// first name
	printf("Input a student's first name: ");
	fgets(student.first_name, sizeof(student.first_name), stdin);
	// last name
	printf("Input a student's last name: ");
	fgets(student.last_name, sizeof(student.last_name), stdin);
	// subjects
	printf("Input 3 subjects\n");
	for (int i=0;i<3;i++) {
		printf("Subject %d: ", i+1);
		fgets(student.subjects[i], sizeof(student.subjects[i]), stdin);
	}
	// score
	printf("Input a score for each subject\n");
	for (int i=0;i<3;i++) {
		printf("Score for subject %d: ", i+1);
		scanf("%f", &student.scores[i]);
	}

	printf("\n--------\n");
	printf("student.id --> %d\n", student.id);
	printf("student.first_name --> %s", student.first_name);
	printf("student.last_name --> %s", student.last_name);
	printf("Student's chosen subjects: \n");
	for (int i=0;i<3;i++) {
		printf("%d. %s", i+1, student.subjects[i]);
	}
	printf("Student's best score is %.2f\n", max(student.scores));
	printf("Student's worst score is %.2f\n", min(student.scores));
	printf("--------\n");

	return 0;
}

float max(float scores[3]) {
	float max = 0;
	for (int i=0;i<3;i++) {
		if (scores[i] > max) max = scores[i];
	}
	return max;
}

float min(float scores[3]) {
	float min = scores[0];
	for (int i=0;i<3;i++) {
		if (scores[i] < min) min = scores[i];
	}
	return min;
}


