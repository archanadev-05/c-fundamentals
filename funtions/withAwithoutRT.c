#include <stdio.h>

void printNumber(int x)
{
    printf("The number is: %d\n", x);
}

int main(void)
{
    int value = 42;
    printNumber(value);
    return 0;
}
