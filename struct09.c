#include <stdio.h>
#include <locale.h>

struct ficha {
    int cod;
    char nome[40];
    char tel[10];
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct ficha aluno, func;

    printf("C�digo do aluno: ");
    scanf("%d", &aluno.cod);
    printf("Nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Telefone do aluno: ");
    scanf("%s", aluno.tel);
    printf("C�digo do funcion�rio: ");
    scanf("%d", &func.cod);
    printf("Nome do funcion�rio: ");
    scanf("%s", func.nome); 
    printf("Telefone do funcion�rio: ");
    scanf("%s", func.tel);

    if (aluno.cod == func.cod)
        printf("Aluno e Funcion�rios s�o a mesma pessoa!\n");
    else
        printf("Aluno e Funcion�rios s�o pessoas diferentes!\n");

    return 0;
}
