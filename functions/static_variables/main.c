#include <stdio.h>

int get_next_value() {
    static int num = 0;
    return ++num;
}

int main() {
    
    for (int i=0; i<10; i++) {
        printf("%i ", get_next_value());
    }
    printf("\n");

    return 0;
}
