#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//a program to copy one String into another String without using library function

void to_continue();

int main() {
	char str1[50], str2[50];
	int i;

	printf("Enter your initial string: ");
	gets(str1);

	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	};

	printf("\nThis is your second copied string: ");
	i=0;
	while (str2[i]) {
		printf("%c", str2[i]);
		i++;
	}
	printf("\n");
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

