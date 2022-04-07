#include <stdio.h>
/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
//a user defined type enum days of week and display all

enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {

	enum week day;
	char week[7][15] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	printf("--- A Programme Showing a Use of enum in C ---\n");

	for (int i=Monday;i<=Sunday;i++) {
		printf("Day %d is %s\n", i+1, week[i]);
	}
 
	return 0;
}


