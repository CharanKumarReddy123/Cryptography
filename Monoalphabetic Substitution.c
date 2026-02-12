#include <stdio.h>

int main() {
    char plain[100], cipher[100];
    char key[26] = "QWERTYUIOPASDFGHJKLZXCVBNM";

    printf("Enter plaintext (UPPERCASE): ");
    gets(plain);

    for(int i=0; plain[i]!='\0'; i++) {
        if(plain[i] >= 'A' && plain[i] <= 'Z')
            cipher[i] = key[plain[i]-65];
        else
            cipher[i] = plain[i];
    }

    printf("Cipher text: %s\n", cipher);
}

INPUT:
HELLO

OUTPUT:
Cipher text: ITSSG
