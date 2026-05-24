#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof *ptr);
    if (ptr == NULL) {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    *ptr = 42; /* initialize dynamically allocated memory */
    printf("value = %d\n", *ptr);

    free(ptr);
    return 0;
}
