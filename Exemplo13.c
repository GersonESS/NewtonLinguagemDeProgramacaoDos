#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    int *pt1, i;
    setlocale(LC_ALL, "Portuguese");
    // aloca��o din�mica de mem�ria
    pt1 = (int*)malloc(sizeof(int) * 5);

    for (i = 0; i < 5; i++) { // Corrigi o loop para executar 5 itera��es
        printf("Digite o %d� valor inteiro: ", i + 1);
        scanf("%d", &pt1[i]);
    }

    for (i = 0; i < 5; i++) { // Corrigi o loop para executar 5 itera��es
        printf("%d� valor = %d\n", i + 1, pt1[i]);
    }

    free(pt1);

    return 0;
}
