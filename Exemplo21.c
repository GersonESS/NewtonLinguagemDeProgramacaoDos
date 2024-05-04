#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *pi;
    pi = (int *)malloc(sizeof(int));

    if (pi == NULL) {
        printf("Falha na aloca��o de mem�ria!\n");
        return 1;
    }

    printf("\nDigite um n�mero: ");
    scanf("%d", pi);
    printf("Voc� digitou o n�mero: %d\n", *pi);

    free(pi);

    // Ap�s liberar a mem�ria, � inseguro acessar seu conte�do.
     printf("\nInformacao alocada: %d\n\n", &pi);

    system("pause");
    return 0;
}
