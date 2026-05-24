#include <stdio.h>

void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0]; // p points to the first element of the array
    printf("Value at p: %d\n", *p); // Output: 1
    printf("Address of element is: %u", p ); 
    p = p + 2; // Move the pointer to the third element of the array
    printf("Value at p: %d\n", *p); // Output: 3
    printf("Address of element is: %u", p ); 
    
}
