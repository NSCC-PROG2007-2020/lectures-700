#include <stdio.h>

void add_one_to_array(int num[], int len) {
    for (int i=0; i<len; i++) {
        num[i]++;
    }
}

void add_one_to_element(int *num) {
    (*num)++;
}

int main() {

    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums)/sizeof(int);

    add_one_to_array(nums, len);

    add_one_to_element(&nums[0]);

    for (int i=0; i<len; i++) {
        printf("%i ", nums[i]);
    }
    printf("\n");

    return 0;
}
