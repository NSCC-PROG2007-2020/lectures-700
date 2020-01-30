#include <stdio.h>

int main() {

    /* calculate the fifth triangular number */

    int triangular_number = 0;

    int i = 1;
    while (i <= 5) {
       triangular_number += i;
       i++;
    }

    printf("The fifth triangular number is %i\n", triangular_number);

    return 0;
}
