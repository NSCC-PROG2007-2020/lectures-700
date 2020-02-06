#include <stdio.h>

#define NUMBERS_SIZE 10

int main() {

    /* const int NUMBERS_SIZE = 10; */
    
    int numbers[NUMBERS_SIZE];

    for (int i = 0; i < NUMBERS_SIZE; i++) {
        numbers[i] = i + 1;
    }

    for (int i = 0; i < NUMBERS_SIZE; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    int numbers2[] = {1, 2, 3, 4, 5, 6, 7, 9, 10};

    for (int i = 0; i < sizeof(numbers2)/sizeof(int); i++) {
        printf("%i ", numbers2[i]);
    }
    printf("\n");

    int numbers3[] = {1, 2, 3};
    int number4 = 4;

    for (int i = 0; i < 25; i++) {
        printf("%i ", *(&number4+i));
    }
    printf("\n");
    printf("%i\n", number4);

    return 0;
}
