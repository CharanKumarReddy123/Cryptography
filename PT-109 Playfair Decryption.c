#include <stdio.h>
#include <string.h>
#include <ctype.h>

char matrix[5][5];

// Create Playfair matrix from keyword
void createMatrix(char key[]) {
    int used[26] = {0};
    int i, j, k = 0;

    used['J' - 'A'] = 1;   // I/J combined

    for(i = 0; key[i] != '\0'; i++) {
        char ch = toupper(key[i]);
        if(!used[ch - 'A']) {
            matrix[k/5][k%5] = ch;
            used[ch - 'A'] = 1;
            k++;
        }
    }

    for(i = 0; i < 26; i++) {
        if(!used[i]) {
            matrix[k/5][k%5] = 'A' + i;
            k++;
        }
    }
}

void findPosition(char ch, int *row, int *col) {
    if(ch == 'J') ch = 'I';

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(matrix[i][j] == ch) {
                *row = i;
                *col = j;
                return;
            }
}

void decrypt(char text[]) {
    int r1,c1,r2,c2;

    for(int i=0; text[i] != '\0'; i += 2) {
        findPosition(text[i], &r1, &c1);
        findPosition(text[i+1], &r2, &c2);

        if(r1 == r2) {
            text[i]   = matrix[r1][(c1+4)%5];
            text[i+1] = matrix[r2][(c2+4)%5];
        }
        else if(c1 == c2) {
            text[i]   = matrix[(r1+4)%5][c1];
            text[i+1] = matrix[(r2+4)%5][c2];
        }
        else {
            text[i]   = matrix[r1][c2];
            text[i+1] = matrix[r2][c1];
        }
    }
}

int main() {
    char key[] = "MONARCHY";

    char cipher[] =
    "KXJEYUREBEZWEHEWRYTUHEYFSKREHEGOYFIWTTTUOLKSYCAJPOBOTEIZONTXBYBNTGONEYCUZWRGDSONSXBOUYWRHEBAAHYUSEDQ";

    createMatrix(key);

    decrypt(cipher);

    printf("Decrypted Message:\n%s\n", cipher);

    return 0;
}


INPUT:
KXJEYUREBEZWEHEWRYTUHEYFSKREHEGOYFIWTTTUOLKSYCAJPOBOTEIZONTXBYBNTGONEYCUZWRGDSONSXBOUYWRHEBAAHYUSEDQ

OUTPUT:
Decrypted Message:
MANYTROOPSAREONTHEWAYSTOPMANYTROOPSAREONTHEWAYSTOP



