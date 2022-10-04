#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *v;
    int i, tam;
    
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tam);
    
    v  = calloc(tam, sizeof(float));
    
    if (!v) {
        return 1;
    }
    
    for (i = 0; i < tam; i++) {
        printf("Elemento %d?\n", i);
        scanf("%f", v+i);
    }
    
    for (i = 0; i < tam; i++) {
        printf("\nOs valores inseridos foram: %.f. ", *(v+i));
    }
    free(v);
    return 0;
}