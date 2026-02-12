#include <stdio.h>
#include <math.h>

int main() {
    double approxKeys = pow(25, 25);

    printf("Approximate number of Playfair keys: 25! ≈ 2^88\n");
    printf("Effectively unique keys (removing duplicates): ≈ 2^80\n");

    return 0;
}


OUTPUT:
Approximate number of Playfair keys: 25! ≈ 2^88
Effectively unique keys (removing duplicates): ≈ 2^80
