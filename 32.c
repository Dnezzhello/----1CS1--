#include <stdio.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// global variable vs local variable

//global variable
char *text = "Here belongs to a global variable";

void local();

int main() {
	printf("\nBefore calling a function to change text.\n");
	printf("%s\n", text);
	local();
	printf("\n--- Outside a function ---\n");
	printf("%s", text);

	return 0;
} 

void local(char text[]) {
	text = "Here belongs to a local variable";
	printf("\n--- Inside a function ---\n");
	printf("%s\n", text);
}


