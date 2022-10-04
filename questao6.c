// QUESTÃO 6

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5, b = 12, c = 5, e;
    int *p;
    int *q;
    
    p = &a;
    q = &b;

    *p * e++;

    c = *p + *q;

    printf("O valor de 'c' é de %d e 'e' %d.", c, e);
}