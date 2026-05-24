/*
 * Sample program to demonstrate "no argument, no return" functions in C.
 * This file contains simple functions that take no parameters and return void.
 */
#include <stdio.h>

/* A function that takes no arguments and returns nothing. */
void printGreeting(void)
{
    printf("Hello! This is a no-argument, no-return function.\n");
}

/* Another no-arg no-return function that prints a simple menu. */
void printMenu(void)
{
    printf("--- Simple Menu ---\n");
    printf("1. Say Hello\n");
    printf("2. Exit\n");
}

int main(void)
{
    printGreeting();   /* call no-arg no-return function */
    printMenu();       /* call another no-arg no-return function */

    /* Demonstrate repeated calls */
    printGreeting();

    return 0; /* main returns an int, but the example functions do not */
}
