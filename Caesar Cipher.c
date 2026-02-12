#include <stdio.h>

void encrypt(char text[], int key) {
    for(int i=0; text[i]!='\0'; i++) {
        text[i] = text[i] + key;
    }
}

void decrypt(char text[], int key) {
    for(int i=0; text[i]!='\0'; i++) {
        text[i] = text[i] - key;
    }
}

int main() {
    char text[50] = "HELLO";
    int key = 3;

    encrypt(text, key);
    printf("Encrypted: %s\n", text);

    decrypt(text, key);
    printf("Decrypted: %s\n", text);

    return 0;
}


INPUT:
HELLO
key = 3


OUTPUT:
Encrypted: KHOOR
Decrypted: HELLO
