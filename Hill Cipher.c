#include <stdio.h>

int main() {
    int key[2][2] = {{3,3},{2,5}};
    int pt[2] = {7,4};   // "HE"

    int ct[2];

    for(int i=0;i<2;i++) {
        ct[i] = 0;
        for(int j=0;j<2;j++) {
            ct[i] += key[i][j] * pt[j];
        }
        ct[i] %= 26;
    }

    printf("Encrypted: %c%c\n", ct[0]+65, ct[1]+65);
    return 0;
}

INPUT:
Plain Text:HE

KEY MATRIX:
3 3
2 5

OUTPUT:
  Encrypted: HI

