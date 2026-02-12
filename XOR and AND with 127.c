#include <stdio.h>

int main() {
    char *str = "Hello World";
    int i = 0;

    printf("Original String: %s\n", str);

    printf("After XOR with 127: ");
    while(str[i] != '\0') {
        printf("%c", str[i] ^ 127);
        i++;
    }

    printf("\nAfter AND with 127: ");
    i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i] & 127);
        i++;
    }

    printf("\n");
    return 0;
}

OUTPUT:
Original String: Hello World
After XOR with 127: 7_8
After AND with 127: Hello World
