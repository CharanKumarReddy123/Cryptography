#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key[100];
    int i;

    printf("Enter plaintext: ");
    gets(text);

    printf("Enter key: ");
    gets(key);

    for(i=0; text[i]!='\0'; i++)
        text[i] = ((text[i]-'A') + (key[i%strlen(key)]-'A')) % 26 + 'A';

    printf("Cipher text: %s\n", text);
}

INPUT:
HELLO
KEY

OUTPUT:
RIJVS
