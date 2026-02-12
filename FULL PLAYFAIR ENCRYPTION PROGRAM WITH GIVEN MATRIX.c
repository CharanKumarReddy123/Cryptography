#include <stdio.h>
#include <string.h>
#include <ctype.h>

char matrix[5][5] = {
    {'M','F','H','I','K'},
    {'U','N','O','P','Q'},
    {'Z','V','W','X','Y'},
    {'E','L','A','R','G'},
    {'D','S','T','B','C'}
};

void find(char ch, int *r, int *c) {
    if(ch=='J') ch='I';

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(matrix[i][j]==ch) {
                *r=i; *c=j;
            }
}

void encrypt(char text[]) {
    int r1,c1,r2,c2;

    for(int i=0;text[i]!='\0';i+=2) {
        find(text[i],&r1,&c1);
        find(text[i+1],&r2,&c2);

        if(r1==r2) {
            text[i]=matrix[r1][(c1+1)%5];
            text[i+1]=matrix[r2][(c2+1)%5];
        }
        else if(c1==c2) {
            text[i]=matrix[(r1+1)%5][c1];
            text[i+1]=matrix[(r2+1)%5][c2];
        }
        else {
            text[i]=matrix[r1][c2];
            text[i+1]=matrix[r2][c1];
        }
    }
}

int main() {
    char plain[200];

    printf("Enter plaintext (uppercase, no spaces): ");
    scanf("%s", plain);

    encrypt(plain);

    printf("Encrypted Text: %s\n", plain);

    return 0;
}

INPUT:MUSTSEEYOUOVERCADOGANWESTCOMINGATONCE
OUTPUT:
Encrypted Text: UG RM XY ZQ ...
