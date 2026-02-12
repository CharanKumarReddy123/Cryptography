#include <openssl/des.h>
#include <stdio.h>

int main() {
    DES_cblock key = "12345678";
    DES_key_schedule schedule;

    DES_set_key_unchecked(&key, &schedule);

    DES_cblock input = "ABCDEFGH";
    DES_cblock output;

    DES_ecb_encrypt(&input, &output, &schedule, DES_ENCRYPT);

    printf("DES Encrypted Output Generated\n");
    return 0;
}

OUTPUT:
DES Encrypted Output Generated
