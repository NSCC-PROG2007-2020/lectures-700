#include <stdio.h>

int main() {

    double x = 2.55;

    /* 3x3 - 5x2 + 6 = 23.231625 */
    double y = 3.0 * x * x * x - 5.0 * x * x + 6.0;
    printf("3x3 - 5x2 + 6 = %f\n", y);

    return 0;

}
