#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "lib.h"
int main()
{
  setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�vel e ponteiro para as mesmas.
    Aluno alunoUm;
    Aluno *ptrUm = &alunoUm;

    Aluno second;
    Aluno *ptrS = &second;

    recebe(ptrUm);
    printf("\n\n");
    recebe(ptrS);

    compara(ptrUm,ptrS);

    printf("\n\n");

    trocaNota(ptrUm,ptrS);

    printf("\n\n");
    int quantidadeAlunos;
    printf("Quantos alunos deseja armazenar? ");
    scanf("%d", &quantidadeAlunos);

    // Chama a fun��o de aloca��o
    Aluno *alunos = aloca(quantidadeAlunos);

    printf("\n\n");

     // Busca por uma matr�cula espec�fica
    char matriculaBuscada[20];
    printf("\nDigite a matr�cula que deseja buscar: ");
    scanf("%s", matriculaBuscada);

    if (buscaAlunoPorMatricula(alunos, quantidadeAlunos, matriculaBuscada)) {
        printf("Aluno com a matr�cula %s encontrado!\n", matriculaBuscada);
    } else {
        printf("Aluno com a matr�cula %s n�o encontrado.\n", matriculaBuscada);
    }

    //libera mem�ria
    free(alunos);

}
