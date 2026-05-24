#include <stdio.h>

char fun(void);

int main(void)
{
    char ch;
    ch = fun();
    printf("ch=%c\n", ch);
    return 0;
}

char fun(void)
{
    char c;
    printf("enter a character: ");
    scanf(" %c", &c);
    return c;
}
