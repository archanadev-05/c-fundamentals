#include <stdio.h>

int avg(int[], int);

int main() {
    int marks[5] = {10, 20, 30, 40, 50};
    int size, average;

    size = sizeof(marks) / sizeof(marks[0]);

    average = avg(marks, size);

    printf("Average is: %d\n", average);

    printf("Inside main size of array is (in bytes): %zu\n", sizeof(marks));

    return 0;
}

int avg(int arr[], int size) {

    int sum = 0;
    int average;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = sum / size;

    printf("Inside avg function size of array is (in bytes): %zu\n", sizeof(arr));

    return average;
}