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

    float float_answer = (float)num1 / num2;
    printf("float_answer = %f\n", float_answer);
    int   int_answer = num1 / num2;
    printf("int_answer = %i\n", int_answer);

    if (float_answer == int_answer) {
        printf("Evenly divisible.\n");
    } else {
        printf("Not evenly divisible.\n");
    }

    return 0;
}
