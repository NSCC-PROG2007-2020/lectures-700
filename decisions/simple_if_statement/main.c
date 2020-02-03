#include <stdio.h>

int main() {

    int a = 4;
    int b = 3;
    int c = 3;

    /* don't overly complicate the logic */
    if (!(a >= b) && !(b == c)) {
        printf("a < b AND b < c\n");
    }

    if (a < b) {
        printf("a < b\n");
    } else if (b < c) {
        printf("b < c\n");
    } else {
        printf("a >= b && b >= c\n");
    }

    /* this is allowed */
    if (a < b) printf("a < b\n");

    /* don't do this! */
    if (a < b) printf("a < b\n"); printf("other stuff\n");

    if (a < b)
        printf("a < b\n");
    else 
        if (b < c)
            printf("b < c\n");
        else
            printf("a >= b && b >= c\n");

    return 0;
}
