#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plain[100], cipher[100];
    char keymap[26] = "CIPHERABDFGJKLMNOQSTUVWXYZ";

    printf("Enter plaintext (uppercase): ");
    gets(plain);

    for(int i=0; i<strlen(plain); i++) {
        if(isalpha(plain[i]))
            cipher[i] = keymap[plain[i]-'A'];
        else
            cipher[i] = plain[i];
    }
    cipher[strlen(plain)] = '\0';

    printf("Cipher text: %s\n", cipher);
    return 0;
}

INPUT:HELLO
OUTPUT:Cipher text: BQJJM
