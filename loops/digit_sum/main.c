#include <stdio.h>

/* Write a program that calculates the sum of the digits of an integer. 
 * For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
 * The program should accept any arbitrary integer typed in by the user.
 */

int main() {

    int num = 0;

    printf("Enter an integer: ");
    scanf("%i", &num);

    int digit = 0;
    int sum = 0;
    while (num > 0) {
        digit = num % 10;
        printf("%i ", digit);
        sum += digit;
        num /= 10;
    }
    printf(" = %i\n", sum);

    return 0;
}
