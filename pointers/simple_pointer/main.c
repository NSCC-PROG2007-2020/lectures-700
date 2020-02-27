#include <stdio.h>

int main() {

    int num = 123;
    char ch = 'A';
    int *ptr;
    char *ptr2;
    int **ptr3;

    ptr = (int *)&ch;
    ptr2 = &ch;
    ptr3 = (int **)&num;

    printf("ptr = %p, *ptr = %i, *ptr = %x\n", ptr, *ptr, *ptr);
    printf("ptr2 = %p, *ptr2 = %c\n", ptr2, *ptr2);
    printf("ptr3 = %p, *ptr3 = %p\n", ptr3, *ptr3);

    return 0;
}
