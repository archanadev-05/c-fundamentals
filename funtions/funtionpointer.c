#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int operate(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);
}

int main(void) {
    int x = 10;
    int y = 5;

    int (*func_ptr)(int, int) = add;
    printf("add: %d\n", func_ptr(x, y));

    func_ptr = subtract;
    printf("subtract: %d\n", func_ptr(x, y));

    printf("operate add: %d\n", operate(x, y, add));
    printf("operate subtract: %d\n", operate(x, y, subtract));

    return 0;
}
