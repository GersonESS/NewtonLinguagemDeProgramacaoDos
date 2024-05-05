#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int *array; // ponteiro para o array de inteiros
    int i;

    // Aloca mem�ria para um array de 5 inteiros
    array = (int*)malloc(sizeof(int) * 5);

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (array == NULL) {
        printf("Erro: Mem�ria n�o p�de ser alocada.\n");
        return 1; // Sa�da do programa com c�digo de erro
    }

    // Preenche o array com alguns valores
    for (i = 0; i < 5; i++) {
        array[i] = i * 10;
    }
    printf("\n");
    // Imprime os valores do array
    printf("Valores do array:\n");
    for (i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Libera a mem�ria alocada
    free(array);

    return 0;
}
