#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
void greet(char name[]);
int factorial(int n);
float calculateAverage(int arr[], int size);

// Main function
int main() {
    printf("=== C Functions Demo ===\n\n");
    
    // 1. Simple function with parameters and return value
    printf("1. Add function:\n");
    int result = add(10, 20);
    printf("10 + 20 = %d\n\n", result);
    
    // 2. Function with string parameter
    printf("2. Greet function:\n");
    greet("Archana");
    printf("\n");
    
    // 3. Recursive function
    printf("3. Factorial function:\n");
    printf("Factorial of 5 = %d\n\n", factorial(5));
    
    // 4. Function with array parameter
    printf("4. Calculate Average function:\n");
    int numbers[] = {10, 20, 30, 40, 50};
    int arraySize = 5;
    float avg = calculateAverage(numbers, arraySize);
    printf("Average of array = %.2f\n\n", avg);
    
    return 0;
}

// Function definition - adds two numbers
int add(int a, int b) {
    return a + b;
}

// Function definition - prints a greeting
void greet(char name[]) {
    printf("Hello, %s! Welcome to C Functions!\n", name);
}

// Function definition - calculates factorial recursively
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function definition - calculates average of array elements
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
