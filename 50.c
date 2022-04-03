#include <stdio.h>
#include <string.h>
/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//a program to check if an entered string is palindrome or not.
void to_continue();
int is_palindrome();

int main() {

	char str[40];
	printf("--- Palindrome Checker ---\n");
	printf("Input your to check if it is palindrome: ");
	scanf("%[^\n]s", &str);

	if (is_palindrome(str)) {
		printf("\nThis string is palindrome");
	} else {
		printf("\nThis string is not palindrome");
	}
	
	to_continue();
	return 0;
}

int is_palindrome(char str[]) {
	int len = strlen(str);
	char new_str[len];
	
	for (int i=0;i<len;i++) {
		new_str[i] = str[len-1 - i];
	}
	
	return !strcmp(str, new_str);
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

