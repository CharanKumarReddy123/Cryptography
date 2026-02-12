#include <openssl/blowfish.h>
#include <stdio.h>

int main() {
    BF_KEY key;
    unsigned char keyData[] = "secret";
    unsigned char input[] = "HELLOWLD";
    unsigned char output[8];

    BF_set_key(&key, 6, keyData);
    BF_ecb_encrypt(input, output, &key, BF_ENCRYPT);

    printf("Blowfish Encryption Done\n");
    return 0;
}

OUTPUT:
Blowfish Encryption Done
