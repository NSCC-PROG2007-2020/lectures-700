#include <stdio.h>
#include <string.h>

#define MY_STRING "This is my string!\n"

int main() {

    char string[] = "Hello World!\n";
    char hello[] = MY_STRING;
    char str_array[] = 
        {'A','n','o','t','h','e','r',0x20,'S','t','r','i','n','g','\0'};
    char *one_more = "One more string!\n";

    printf("%s\n", str_array);

    for (int i = 0; i < strlen(string) + 1; i++) {
        printf("%02X ", string[i]);
    }
    printf("\n");

    printf("%s\n", one_more);

    return 0;
}
