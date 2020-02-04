#include <stdio.h>

/* Write a program that accepts two integer values typed in by the user.
 * Display the result of dividing the first integer by the second,
 * to three-decimal-place accuracy. Remember to have the program check
 * for division by zero.
 */

int main() {

    float num1, num2;

    printf("Enter a dividend: ");
    scanf("%f", &num1);

    printf("Enter a divisor: ");
    scanf("%f", &num2);

    if (num2 == 0.0f) {
        printf("Divide by zero error.\n");
    } else {
        printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
    }


    return 0;
}
