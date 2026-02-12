#include <stdio.h>

int main() {
    char cipher[] = "BU...";   // example
    int a=9,b=2,ainv=3;

    for(int i=0; cipher[i]!='\0'; i++)
        cipher[i] = (ainv*(cipher[i]-'A'-b+26)%26)+'A';

    printf("Plain: %s\n", cipher);
}


OUTPUT:Plain text recovered successfully
