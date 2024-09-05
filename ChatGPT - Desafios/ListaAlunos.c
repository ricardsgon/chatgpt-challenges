/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define ESTUDANTE_MAX 500

struct estudante{
    char nome[50];
    int média;
};

void addEstudante(struct estudante student[], int *contador);
void showEstudante(struct estudante student[], int *contador);

int main(){
    setlocale(LC_ALL, "Portuguese");

}

void addEstudante(struct estudante student[], int *contador){
    if(*contador <= ESTUDANTE_MAX){
        printf("Digite o nome do aluno: ");
        scanf("%s", &student[*contador].nome);
        printf("Digite a média do aluno: ");
        scanf("%d", &student[*contador].média);
        printf("\n");
        printf("Aluno adicionado com sucesso.\n");
        *contador++;
    }else{
        printf("Limite de alunos atingido.");
    }
}

void showEstudante(struct estudante student[], int *contador){
    for(int i = 0;)
    printf("%s", s)
}