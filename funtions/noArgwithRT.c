#include <stdio.h>

/* Function with no arguments that returns an integer value */
int getNumber(void)
{
    return 42;
}

int main(void)
{
    int value = getNumber();
    printf("Value returned from getNumber: %d\n", value);
    return 0;
}

