#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int nums[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("%i ", nums[i]);
    }
    printf("\n");

    /* create a pointer variable */
    int *num_ptr;

    /* allocate memory for array */
    num_ptr = (int *)malloc(sizeof(nums));

    /* use the memory */
    /*
    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        num_ptr[i] = nums[i];
    }
    */
    memcpy(num_ptr, nums, sizeof(nums));

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("%i ", num_ptr[i]);
    }
    printf("\n");

    /* free memory */
    free(num_ptr);

    /* char str[] = {'h','e','l','l','o','\0'}; */
    char *str = "Hello World!";

    printf("%s\n", str);

    char *ch_ptr;

    ch_ptr = (char *)malloc(strlen(str)+1);

    /*
    for (int i = 0; i < strlen(str) + 1; i++) {
        ch_ptr[i] = str[i];
    }
    */
    /* strcpy(ch_ptr, str); */
    memcpy(ch_ptr, str, strlen(str)+1);

    printf("ch_ptr: %s\n", ch_ptr);

    free(ch_ptr);

    return 0;
}
