#include <stdio.h>
#include <stdint.h>
#include <float.h>

int main() {

    /* declaring variables */
    short sint = 0;      // 16-bit integer
    unsigned short int usint = 0; // 16-bit unsigned integer
    int num = 0;            // 32-bit integer (preferred)
    unsigned int unum = 0;  // 32-bit unsigned integer
    long int lnum = 0;      // 64-bit integer

    char ch = 0;            // 8-bit integer
    unsigned char uch = 0;  // 8-bit unsigned integer

    ch = 65 + 5;
    uch = 234;
    unum = 2147483648;

    //num = INT32_MAX;
    //num = INT32_MIN;

    printf("range: %i to %i, ch = %c\n", INT8_MIN, INT8_MAX, ch);
    printf("range: %i to %i, ch = %i\n", 0, UINT8_MAX, uch);
    printf("range: %i to %i, sint = %i\n", INT16_MIN, INT16_MAX, sint);
    printf("range: %i to %i, num = %i\n", INT32_MIN, INT32_MAX, num);
    printf("range: %u to %u, unum = %u\n", 0, UINT32_MAX, unum);
    printf("range: %lli to %lli, lnum = %li\n", INT64_MIN, INT64_MAX, lnum);


    float f = 0.0f; // (preferred)
    double d = 0.0;

    f = -32.452f;
    f = -2e38f;
    d = 2e57;

    printf("range: %f to %f, f = %g\n", FLT_MIN, FLT_MAX, f);
    printf("range: %lf to %lf, f = %g\n", DBL_MIN, DBL_MAX, d);





    return 0;

}
