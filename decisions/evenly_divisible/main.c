#include <stdio.h>

/* Write a program that asks the user to type in two integer values at the 
 * terminal. Test these two numbers to determine if the first is evenly 
 * divisible by the second, and then display an appropriate message at 
 * the terminal.
 */

int main() {

    int num1, num2;

    printf("Enter a dividend: ");
    scanf("%i", &num1);

    printf("Enter a divisor: ");
    scanf("%i", &num2);

    if (num1 % num2 == 0) {
        printf("Evenly divisible.\n");
    } else {
        printf("Not evenly divisible.\n");
    }

    return 0;
}
