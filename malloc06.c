
/*
Escreva um programa que aloque dinamicamente na memoria o tamanho exato para armazenar
um valor inteiro inserido por meio de uma entrada de dados. Imprima o valor armazenado e o tamanho em bytes
da região alocada para alocar o valor, usando a função malloc():
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *p;
    p = (int *)malloc(sizeof(int));

    if (p == NULL) {
        printf("Falha na aloca��o de mem�ria!\n");
        return 1;
    }

    printf("\nDigite o inteiro: ");
    scanf("%i", p);
    printf("Inteiro armazenado: %i\n", *p);
    printf("Tamanho da regi�o: %u bytes\n\n", sizeof(*p));

    free(p);

    return 0;
}
