#include <stdio.h>
#include <stdlib.h>

int main() {

    /* create a pointer variable */
    int *num_ptr;

    /* allocate some memory */
    num_ptr = (int *)malloc(sizeof(int));

    /* store data in memory */
    *num_ptr = 12345;

    printf("num = %i\n", *num_ptr);

    /* de-allocate the memory when done */
    free(num_ptr);

    return 0;
}
