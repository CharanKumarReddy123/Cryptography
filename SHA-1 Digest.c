#include <openssl/sha.h>
#include <stdio.h>

int main() {
    unsigned char data[] = "Hello World";
    unsigned char hash[SHA_DIGEST_LENGTH];

    SHA1(data, sizeof(data)-1, hash);

    printf("SHA-1 Generated\n");
    return 0;
}

INPUT:
Hello World

OUTPUT:
SHA-1 Generated
