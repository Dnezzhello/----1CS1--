#include <stdio.h>
#include <string.h>
/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//a c program to perform string manipulation by using library function
void to_continue();

int main() {
	char str1[40];
	char str2[40];	
	int num;

	printf("\n--- Welcome to A Programme to Manipulate String in C ---\n");
	printf("Input your initial string: ");
	scanf(" %[^\n]s", &str1);
	printf("\n1 for string length\n2 for copying string to another one\n");
	printf("3 for comparing two strings\n4 for string concatenation\n");
	printf("Enter a number: ");
	scanf(" %d", &num);
	
	switch (num) {
		case 1:
			printf("\nIts length is %d\n", strlen(str1));
			break;
		case 2:
			strcpy(str2, str1);
			printf("\nYour copied string is %s", str2);
			break;
		case 3:
			printf("\nInput your second string: ");
			scanf(" %[^\n]s", &str2);
			!strcmp(str1, str2) ? printf("\nTwo strings are the same") : printf("\nThey are not the same"); 
			break;
		case 4:
			printf("\nInput your second string: ");
			scanf(" %[^\n]s", &str2);
			printf("\nConcatenated string: %s", strcat(str1, str2));
			break;
		default:
			printf("\nInvalid Input!!");
			main();
	}		
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
};

