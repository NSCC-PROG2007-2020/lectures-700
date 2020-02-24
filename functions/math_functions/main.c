#include <stdio.h>

/* a global variable */
int num = 10;

int absolute_value(int num) {
    if (num < 0) {
        num *= -1;
    }
    return num;
}

int main() {

    /* a local variable */
    int num = 5;

    printf("Enter an integer: ");
    scanf("%i", &num);

    printf("|%i| = %i\n", num, absolute_value(num));

    return 0;
}

