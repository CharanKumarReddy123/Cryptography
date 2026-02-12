#include <stdio.h>

int main() {
    char *str = "Hello World";
    int i = 0;

    printf("Original String: %s\n", str);
    printf("After XOR with 0: ");

    while(str[i] != '\0') {
        char result = str[i] ^ 0;
        printf("%c", result);
        i++;
    }

    printf("\n");

    return 0;
}

OUTPUT:
Original String: Hello World
After XOR with 0: Hello World


