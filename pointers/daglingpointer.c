#include <stdio.h>
#include <stdlib.h>

int *func()
{
    int a=10;
    return &a;


}

void main(void)
{
    int *ptr=func();
    // int *ptr=(int*)malloc(sizeof(int));
    // *ptr=10;
    // printf("value=%d\n", *ptr);
    // free(ptr);
    // ptr=NULL;
    printf("value=%d\n", *ptr); 
}