#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cipher[200];
    int freq[26] = {0};
    int i, len, max = 0, maxIndex = 0;

    printf("Enter ciphertext: ");
    gets(cipher);

    len = strlen(cipher);

    // Calculate frequency of each letter
    for(i = 0; i < len; i++) {
        if(isalpha(cipher[i])) {
            char ch = toupper(cipher[i]);
            freq[ch - 'A']++;
        }
    }

    // Find most frequent letter
    for(i = 0; i < 26; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxIndex = i;
        }
    }

    printf("\nMost frequent letter in ciphertext: %c\n", maxIndex + 'A');

    // Assume most frequent letter corresponds to 'E'
    int assumedKey = (maxIndex - ('E' - 'A') + 26) % 26;

    printf("Assumed key based on frequency: %d\n", assumedKey);

    printf("\nPossible plaintexts:\n");

    // Try all possible shifts and display
    for(int key = 0; key < 26; key++) {
        printf("\nKey %2d: ", key);

        for(i = 0; i < len; i++) {
            if(isalpha(cipher[i])) {
                char ch = toupper(cipher[i]);
                ch = ((ch - 'A' - key + 26) % 26) + 'A';
                printf("%c", ch);
            } else {
                printf("%c", cipher[i]);
            }
        }
    }

    printf("\n");
    return 0;
}


INPUT:   Enter ciphertext: KHOOR ZRUOG
OUTPUT:   Most frequent letter in ciphertext: O
Assumed key based on frequency: 10

Possible plaintexts:

Key  0: KHOOR ZRUOG
Key  1: JGNNQ YQTNF
Key  2: IFMMP XPSME
Key  3: HELLO WORLD
Key  4: GDKKN VNQKC
Key  5: FCJJM UMPJB
Key  6: EBIIL TLOIA
...
Key 25: LIPPS ASVPH
