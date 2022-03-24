#include <stdio.h>

/*1CS1 Souphaxay Naovalath*/
// Increment and Decrement Operator

int a = 5;
void increment();
void decrement();

int main() {
	printf("\na is 5.\n");
	increment(a);
	printf("a++ is %d\n", a);
	decrement(a);
	decrement(a);
	printf("a-- is %d", a);

}

void increment() {
	a++;
}

void decrement() {
	a--;
}
