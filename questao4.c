// QUESTÃO 4

#include <stdio.h>

int main() {
    int i = 34, j;
    int *p;
    p = &i;
    *p++;

    j = *p + 33;

    printf("O valor de j é %d.", j);
}