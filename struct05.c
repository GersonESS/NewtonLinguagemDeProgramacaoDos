#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct REGISTRO {
    int numero;
    char letra;
    float real;
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct REGISTRO variavel;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &variavel.numero);
    
    printf("Digite um caractere: ");
    scanf(" %c", &variavel.letra);
    
    printf("Digite um n�mero real: ");
    scanf("%f", &variavel.real);

    // Impress�o dos campos da estrutura
    printf("\nnumero = %i", variavel.numero);
    printf("\nletra = %c", variavel.letra);
    printf("\nreal = %f \n", variavel.real);

    return 0;
}
