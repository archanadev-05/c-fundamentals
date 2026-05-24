#include <stdio.h>

/* Example: Function with arguments and with return type */

/* Function declaration (prototype) */
int add(int a, int b);

int add(int a, int b) {
	return a + b; /* returns the sum of two integers */
}

int main(void) {
	int x = 7, y = 5;
	int result = add(x, y); /* call with arguments and capture return value */

	printf("add(%d, %d) = %d\n", x, y, result);
	return 0;
}

