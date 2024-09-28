#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
//implementações

//aluno atribui essas informações a struct aluno da Main.
/*É do mesmo tipo, pois, para efetuar a adição em uma determinada
Struct, é preciso que o tipo da função seja o tipo de dado da struct.*/
Aluno recebe (Aluno *aluno){
printf("digite a matricula do aluno\n");
scanf("%19s",aluno->matricula); //referencia a struct da main.

printf("digite o nome do aluno\n");
scanf("%19s", aluno->nome);

printf("digite a nota do aluno\n");
scanf("%f", &aluno->nota);

}

void compara (Aluno *ptrUm, Aluno *ptrS){
    if(ptrS->nota > ptrUm->nota){
        printf("o aluno %s tirou a maior nota %f\n", ptrS->nome,ptrS->nota);
    } else if(ptrS->nota==ptrUm->nota){
        printf("os alunos empataram\n");
    } else{
        printf("o aluno %s tirou a maior nota %f\n", ptrUm->nome,ptrUm->nota);
    }
}

void trocaNota(Aluno *ptrUm, Aluno *ptrS){

    printf("nota do %s, : %f \n",ptrUm->nome,ptrUm->nota);
    printf("nota do %s, : %f \n",ptrS->nome,ptrS->nota);

    printf("apos a troca: \n\n");

    float laranjo;

    laranjo = ptrUm->nota/2;

    ptrUm->nota = ptrS->nota;

    ptrS->nota = laranjo;

    printf("nota do %s, : %f \n",ptrUm->nome,ptrUm->nota);
    printf("nota do %s, : %f \n",ptrS->nome,ptrS->nota);
}


// Função que aloca memória para um vetor de Alunos
Aluno* aloca(int quantidadeAlunos) {
    // Alocação de memória para o vetor de Alunos
    Aluno *alunoArr = (Aluno *)malloc(quantidadeAlunos * sizeof(Aluno));

    // Verifica se a alocação foi bem-sucedida
    if (alunoArr == NULL) {
        printf("Impossível alocar memória!\n");
        return NULL;  // Retorna NULL se a alocação falhar
    }

    // Coleta dados dos alunos
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Digite a matrícula do aluno %d:\n", i + 1);
        scanf("%s", alunoArr[i].matricula);

        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf("%s", alunoArr[i].nome);

        printf("Digite a nota do aluno %d:\n", i + 1);
        scanf("%f", &alunoArr[i].nota);
    }

    // Retorna o ponteiro para o vetor alocado
    return alunoArr;
}


float buscaAlunoPorMatricula(Aluno *alunos, int quantidadeAlunos,char *matricula) {
    for (int i = 0; i < quantidadeAlunos; i++) {
        // Compara a matrícula atual com a matrícula procurada
        if (strcmp(alunos[i].matricula, matricula) == 0) {
            return 1; // Retorna 1 se encontrar a matrícula
        }
    }
    return 0; // Retorna 0 se não encontrar a matrícula
}
