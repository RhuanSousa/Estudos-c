#include <stdio.h>

int main(void) {

    int vet[5];
    int *p = vet;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nO dobro de %d e %d", p[i], *(p+i) * 2);
    }
    
    return 0;
}