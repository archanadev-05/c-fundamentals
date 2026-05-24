
/*
 Example: function call by value and function call by reference in C
 
*/

#include <stdio.h>

/* Call by value: modifications inside the function do not affect the caller */
void swap_by_value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("[inside swap_by_value] a = %d, b = %d\n", a, b);
}

/* Call by reference: pass pointers so the function can modify caller's variables */
void swap_by_reference(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("[inside swap_by_reference] *a = %d, *b = %d\n", *a, *b);
}

int main(void) {
	int x = 10, y = 20;

	printf("Before swap_by_value: x = %d, y = %d\n", x, y);
	swap_by_value(x, y);
	printf("After swap_by_value: x = %d, y = %d\n\n", x, y);

	printf("Before swap_by_reference: x = %d, y = %d\n", x, y);
	swap_by_reference(&x, &y);
	printf("After swap_by_reference: x = %d, y = %d\n", x, y);

	return 0;
}
