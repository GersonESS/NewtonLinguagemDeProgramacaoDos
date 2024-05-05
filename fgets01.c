#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char *pstring;
    pstring = (char*)malloc(sizeof(char) * 31); // Corrigido para alocar mem�ria para at� 30 caracteres

    if (pstring == NULL) {
        printf("Erro: Mem�ria n�o p�de ser alocada.\n");
        return 1; // Sa�da do programa com c�digo de erro
    }

    printf("Digite uma palavra de at� 20 caracteres: ");
    fgets(pstring, 31, stdin); // Corrigido para fgets para evitar estouro de buffer
    printf("A palavra � %s", pstring);
    free(pstring);

    return 0;
}
