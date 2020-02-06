#include <stdio.h>
#include <string.h>

int main() {

    int nums[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%i ", nums[r][c]);
        }
        printf("\n");
    }

    char strings[][5] = {
        "one", "two", "three", "four", "five"
    };

    for (int r = 0; r < 5; r++ ) {
        printf("%s ", strings[r]);
    }
    printf("\n");

    char *c_strings[] = {
        "six", "seven", "eight", "nine", "ten"
    };

    for (int i = 0; i < 5; i++) {
        printf("%s = %lu\n", c_strings[i], strlen(c_strings[i]));
    }

    return 0;
}
