#include <openssl/md5.h>
#include <stdio.h>

int main() {
    unsigned char data[] = "Hello World";
    unsigned char hash[MD5_DIGEST_LENGTH];

    MD5(data, sizeof(data)-1, hash);

    printf("MD5 Generated\n");
    return 0;
}


INPUT:
Hello World

OUTPUT:
MD5 Generated
