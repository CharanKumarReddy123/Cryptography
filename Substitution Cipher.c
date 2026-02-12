#include <stdio.h>

int main() {
    char plain[] = "HELLO";
    char key[] =   "QWERTYUIOPASDFGHJKLZXCVBNM";
    char cipher[50];

    for(int i=0; plain[i]!='\0'; i++) {
        cipher[i] = key[plain[i]-65];
    }

    printf("Cipher Text: %s\n", cipher);
    return 0;
}


INPUT:
HELLO
Key mapping = QWERTYUIOPASDFGHJKLZXCVBNM


OUTPUT:
Cipher Text: ITSSG
