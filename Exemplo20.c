#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct x {
    int a;
    int b;
    int c;
};

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct x estrutura;
    int *y = malloc(sizeof(estrutura));

    if (y == NULL) {
        printf("Falha na aloca��o de mem�ria!\n");
        return 1;
    }

    printf("%zu\n", sizeof(estrutura)); // Corrigi a formata��o e usei %zu para o tipo size_t.

    free(y);

    return 0;
}
