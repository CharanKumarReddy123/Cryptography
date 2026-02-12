#include <openssl/aes.h>
#include <stdio.h>

int main() {
    AES_KEY enc_key;
    unsigned char key[16] = "1234567890123456";
    unsigned char text[16] = "HELLO WORLD1234";
    unsigned char out[16];

    AES_set_encrypt_key(key, 128, &enc_key);
    AES_encrypt(text, out, &enc_key);

    printf("AES Encryption Completed\n");
    return 0;
}


OUTPUT:
AES Encryption Completed
