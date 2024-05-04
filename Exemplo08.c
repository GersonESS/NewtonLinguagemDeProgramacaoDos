#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int count = 10;
    int *pt = NULL;
    pt = &count;
    setlocale(LC_ALL, "Portuguese");

    // Ao imprimir os valores nesse momento percebe-se que o
    // valor contido na posi��o apontada pelo ponteiro e o
    // valor da vari�vel s�o os mesmos.
    printf("O valor contido na vari�vel count � %i\n", count);
    // imprime o endere�o contido no ponteiro (conte�do do
    // ponteiro)
    printf("O endere�o contido no ponteiro � %p\n", (void*)pt);
    // imprime o conte�do do endere�o de mem�ria apontado por
    // pt
    printf("O valor contido no endere�o armazenado no ponteiro � %i\n", *pt);
    // quando � utilizado o operador indireto do ponteiro ele
    // acessa, a vari�vel para a qual aponta de forma indireta,
    // quando recebe, o valor 30 esse valor � alterado na vari�vel count para onde ele aponta.
    *pt = 30;
    printf("O valor contido na vari�vel count agora � %i\n", count);
    printf("O valor contido no endere�o armazenado no ponteiro agora � %i\n", *pt);
    // Ao imprimir os valores depois da atribui��o com o
    // operador indireto, nos dois casos ser� impresso 30.

    return 0;
}
