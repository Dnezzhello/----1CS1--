#include <stdio.h>

/* 1CS1 Souphaxay Naovalath */
// Grading Programme

void result(float x);

int main() {
	float a, b, c, d, e;
	printf("Please enter a score of each subject below.\n");
	printf("Maths: ");
	scanf("%f", &a);
	printf("Physics: ");
	scanf("%f", &b);
	printf("Chemistry: ");
	scanf("%f", &c);
	printf("English: ");
	scanf("%f", &d);
	printf("Computer: ");
	scanf("%f", &e);
	printf("The average score of 5 subjects is %.2f\n", (a+b+c+d+e)/5.0);
	result(a+b+c+d+e);
	return 0;
}

void result(float x) {
	float score = x / 5.0;
	if (score > 80) {
		printf("A+");
	} else if (score >= 65 && score <= 80) {
		printf("A");
	} else if (score >= 50 && score <= 65) {
		printf("B");
	} else if (score >= 42 && score <= 50) {
		printf("C");
	} else {
		printf("Fail");
	}
}
