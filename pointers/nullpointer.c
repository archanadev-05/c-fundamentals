#include <stdio.h>
void main(void)
{
    int a=3;
    int *ptr1=NULL;
    int *ptr2=&a;
    printf("ptr1=%d\n", ptr1);
    printf("ptr2=%d\n", ptr2);
}