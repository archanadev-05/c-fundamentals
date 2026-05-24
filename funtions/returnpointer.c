#include <stdio.h>

int* returnPointer(int[]);

void main() {
    int arr[5] = {1, 2, 3, 4, 5},*p;
    p = returnPointer(arr);
    printf("First element of the array is: %d\n", *p);
}

int *returnPointer(int arr[]) {
    arr = arr + 2; // Move pointer to the third element of the array
    return arr; // Return pointer to the third element
}