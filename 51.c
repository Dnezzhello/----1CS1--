#include <stdio.h>
#include <string.h>

/* 1CS1 ສຸພະໄຊ ເນົາວະລາດ */
// a c program to read and print an employee’s details like name,employee id,salary  etc. using structure

struct Employee {
	char first_name[20];
	char last_name[20];
	char emp_id[20];
	int age;
	int salary;
};

int main() {

	char fname[20];
	char lname[20];
	char emp_id[20];
	int age;
	int salary;

	struct Employee employee;

	printf("--- A Programme Using struct in C ---\n");
	printf("This programme show an example related to employee\n");

	// id
	printf("Input employee's id: ");
	scanf(" %s", emp_id);
	strcpy(employee.emp_id, emp_id);
	// first name
	printf("Input employee's first name: ");
	scanf(" %s", fname);
	strcpy(employee.first_name, fname);
	// last name
	printf("Input employee's last name: ");
	scanf(" %s", lname);
	strcpy(employee.last_name, lname);
	// age
	printf("Input employee's age: ");
	scanf(" %d", &employee.age);
	// salary
	printf("Input employee's salary: ");
	scanf(" %d", &employee.salary);

	printf("\n--------\n");
	printf("employee.emp_id --> %s\n", employee.emp_id);
	printf("employee.first_name --> %s\n", employee.first_name);
	printf("employee.last_name --> %s\n", employee.last_name);
	printf("employee.age --> %d\n", employee.age);
	printf("employee.salary --> %d\n", employee.salary);
	printf("--------\n");

	return 0;
}

