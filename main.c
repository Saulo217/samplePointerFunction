#include <stdio.h>

int add(int first_number, int second_number);
int sub(int first_number, int second_number);
int mul(int first_number, int second_number);
int div(int first_number, int second_number);

int main() {
	// Setup Variables
	int first_number, second_number, index_operation;
	// Setup Array of Functions Pointers
	int (*operations_pointer_list[4])(int first_number, int second_number) = {};

	// Populate operations_pointer_list
	operations_pointer_list[0] = &add;
	operations_pointer_list[1] = &sub;
	operations_pointer_list[2] = &mul;
	operations_pointer_list[3] = &div;
	
	// Operation Input
	printf("Select a Operation:\n0 - Add\n1 - Sub\n2 - Mul\n3 - Div\n");
	scanf("%d", &index_operation);
	
	// First Number Input
	printf("Type First Number:\n");
	scanf("%d", &first_number);

	// Second Number Input
	printf("Type Second Number:\n");
	scanf("%d", &second_number);

	// Operation Result Output
	printf("%d\n", operations_pointer_list[index_operation](first_number, second_number));
	return 0;
}

int add(int first_number, int second_number) {
	return first_number + second_number;
}

int sub(int first_number, int second_number) {
	return first_number - second_number;
}

int mul(int first_number, int second_number) {
	return first_number * second_number;
}

int div(int first_number, int second_number) {
	return first_number / second_number;
}

