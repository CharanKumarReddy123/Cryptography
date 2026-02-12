#include <stdio.h>
#include <math.h>

int main() {
    long int p=3, q=7, n, phi, e=2, d=0, msg=12;

    n = p*q;
    phi = (p-1)*(q-1);

    while(e < phi) {
        if(phi % e != 0) break;
        e++;
    }

    while((e*d) % phi != 1) d++;

    long int cipher = pow(msg,e);
    cipher = cipher % n;

    printf("Encrypted: %ld\n", cipher);
    return 0;
}

INPUT:
p = 3, q = 7
message = 12

OUTPUT:
Encrypted: 3
