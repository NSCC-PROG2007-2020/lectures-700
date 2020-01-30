#include <stdio.h>

int main() {

    /* (3.31 x 10-8 x  2.01 x 10-7) /
       (7.16 x 10-6 + 2.01 x 10-8) =
       9.26602694 x 10-10 */

    double answer =
            (3.31e-8 * 2.01e-7) /
            (7.16e-6 + 2.01e-8);

    printf("answer = %.9g\n", answer);

    return 0;

}
