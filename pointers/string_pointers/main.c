#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Hello World!";
    char str2[] = {'H','e','l','l','o','\0'};
    char *str3 = "Hello Again!";

    printf("str = %s, str = %p\n", str, str);
    printf("str2 = %s, str = %p\n", str2, str2);
    printf("str3 = %s, str3 = %p\n", str3, str3);

    for (int i=0; i<strlen(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    for (int i=0; i<strlen(str); i++) {
        printf("%c ", *(str + i));
    }
    printf("\n");

    /* doesn't work because str3 is in the heap */
    /* copies from str to str3 */
    /*
    strcpy(str3, str); 

    printf("str = %s\n", str);
    printf("str3 = %s\n", str3);
    */

    char str4[] = "Hello one more time?";

    strcpy(str4, str);

    printf("str = %s\n", str);
    printf("str4 = %s\n", str4);

    char buffer[256];

    strncpy(buffer, str, 256);
    buffer[sizeof(buffer)-1] = '\0';

    printf("str = %s\n", str);
    printf("buffer = %s\n", buffer);

    char *s1 = "String 1";
    char *s2 = "String 2";

    if (strcmp(s1, s2) == 0) {
        printf("EQUAL!\n");
    } else {
        printf("NOT equal.\n");
    }

    char *long_str = "This is a story about a man named Jed.";
    char *buf_ptr = buffer;
    for (int i=0; i<strlen(long_str); i++) {

        printf("%c ", long_str[i]);

        *buf_ptr = long_str[i];

        if (long_str[i] == ' ') {
            *buf_ptr = '\0';
            buf_ptr = buffer;
            printf("buffer: %s\n", buffer);
            printf("\n");

            if (strcmp(buffer, "named") == 0) {
                printf("Found word!\n");
            }

        } else {
            buf_ptr++;
        }

    }
    printf("\n");

    return 0;
}
