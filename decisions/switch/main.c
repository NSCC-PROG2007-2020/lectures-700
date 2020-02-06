#include <stdio.h>

int main() {

    char buffer[32];

    printf("Enter a string: ");
    scanf("%s", buffer);

    switch (buffer[0]) {
        case '1':
            printf("Hello!\n");
            break;
        case '2':
            printf("Goodbye!\n");
            break;
        default:
            printf("You didn't say the magic word!\n");
            break;
    }

    return 0;
}
