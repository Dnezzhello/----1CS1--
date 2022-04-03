#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//  a program to print String and findout their length without using library function

void to_continue();

int main() {
	char str[50];
	int i;

	printf("Input your string: ");
	gets(str);
	printf("This is your string: ");

	for (i=0; str[i] != '\0';i++);
	printf("\nIts length is %d", i);
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

