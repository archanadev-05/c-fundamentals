#include <stdio.h>
void main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int *p=a;
    printf("%d %d\n  ", *(p++),*p++);
    printf("pointer =%d\n", *p);
    
}