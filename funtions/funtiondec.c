#include <stdio.h>

float sum(void); // function declaration


int main(void)
{
    sum(); // function calling
    return 0;
}

float sum() // function definition
{
    int a, b, total;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    total = a + b;
    printf("sum = %d\n", total);
}


// int main(void)
// {
//     sum(5,6); // function calling
//     return 0;
// }

// float sum() // function definition
// {
//     int a, b, total;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     total = a + b;
//     printf("sum = %d\n", total);
// }


