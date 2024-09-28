//cabeçalho
struct aluno{
 char matricula[8];
 char nome[100];
 float nota;
};
typedef struct aluno Aluno;

Aluno recebe(Aluno *aluno);
void compara(Aluno *ptrUm, Aluno *ptrS);
void trocaNota(Aluno *ptrUm, Aluno *ptrS);
Aluno *aloca(int quantidadeAlunos);
float buscaAlunoPorMatricula(Aluno *alunos, int quantidadeAlunos,char *matricula);
