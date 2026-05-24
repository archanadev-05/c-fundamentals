#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int *p=a;
    int *q=&a[3];
    printf("q-p = %d\n", q-p) ;
    printf("p-q =%d\n",p-q) ;+
    printf("value=%d\n", *q);
    q=q-2;
    printf("value =%d\n", *q) ;
    p=p+2;
    printf("q-p=%d\n", q-p) ;
    q=q-2;

}
