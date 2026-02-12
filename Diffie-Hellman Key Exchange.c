#include <stdio.h>
#include <math.h>

int main() {
    int p=23, g=5;
    int a=6, b=15;

    int A = pow(g,a);
    int B = pow(g,b);

    int key1 = pow(B,a);
    int key2 = pow(A,b);

    printf("Shared Key: %d\n", key1);
    return 0;
}

INPUT:
p = 23
g = 5
a = 6
b = 15


OUTPUT:
Shared Key: 2
