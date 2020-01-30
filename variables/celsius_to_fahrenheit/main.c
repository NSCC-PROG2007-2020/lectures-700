#include <stdio.h>

int main() {

    float celsius;
    float fahrenheit;

    /* fahrenheit = 20.0f; */
    printf("Enter degrees in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0f) / 1.8f;

    printf("%.2fF = %.2fC\n", fahrenheit, celsius);

    return 0;
}
