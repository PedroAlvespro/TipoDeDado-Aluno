#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "lib.h"
int main()
{
  setlocale(LC_ALL, "Portuguese");

    //declaração de variável e ponteiro para as mesmas.
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

    // Chama a função de alocação
    Aluno *alunos = aloca(quantidadeAlunos);

    printf("\n\n");

     // Busca por uma matrícula específica
    char matriculaBuscada[20];
    printf("\nDigite a matrícula que deseja buscar: ");
    scanf("%s", matriculaBuscada);

    if (buscaAlunoPorMatricula(alunos, quantidadeAlunos, matriculaBuscada)) {
        printf("Aluno com a matrícula %s encontrado!\n", matriculaBuscada);
    } else {
        printf("Aluno com a matrícula %s não encontrado.\n", matriculaBuscada);
    }

    //libera memória
    free(alunos);

}
