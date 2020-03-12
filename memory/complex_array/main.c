#include <stdio.h>
#include <stdlib.h>

void print_array(int **dbl_ptr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", dbl_ptr[i][j]);
        }
    }
    printf("\n");
}

void free_array(int **dbl_ptr) {
    for (int i = 0; i < 3; i++) {
        free(dbl_ptr[i]);
    }
    free(dbl_ptr);
}

int main() {

    int nums[3][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", nums[i][j]);
        }
    }
    printf("\n");

    /* create a pointer variable */
    int **dbl_ptr;

    /* allocate the index */
    dbl_ptr = (int **)malloc(3 * sizeof(int *));

    /* allocate each row for the 2D array */
    for (int i = 0; i < 3; i++) {
        dbl_ptr[i] = (int *)malloc(4 * sizeof(int));
        for (int j = 0; j < 4; j++) {
            dbl_ptr[i][j] = nums[i][j];
        }
    }

    print_array(dbl_ptr);

    /* de-allocate the memory */
    free_array(dbl_ptr);

    return 0;
}
