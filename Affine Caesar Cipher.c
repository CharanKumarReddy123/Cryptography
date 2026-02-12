#include <stdio.h>

int main() {
    char text[100];
    int a, b;

    printf("Enter text: ");
    gets(text);

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(int i=0;text[i]!='\0';i++)
        text[i] = ((a*(text[i]-'A')+b)%26)+'A';

    printf("Cipher: %s\n", text);
}

INPUT:
HELLO
5 8

OUTPUT:
Cipher: RCLLA
