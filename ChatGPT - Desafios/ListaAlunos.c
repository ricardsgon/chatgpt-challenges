/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define ESTUDANTE_MAX 500

typedef struct war
{
    char nome[50];
    int media;
}estudante;

void addEstudante(estudante student[], int *contador);
void showEstudante(estudante student[], int *contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, contador;
    estudante Student[ESTUDANTE_MAX];
    int *Pointer = &Student[ESTUDANTE_MAX]; 
    do{
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar alunos\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch(menu){
            case 1: 
                addEstudante(*Pointer, contador);
                break;
        }
    }while (menu != 3);
}

void addEstudante(estudante student[], int *contador)
{
    if (*contador <= ESTUDANTE_MAX)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", &student[*contador].nome);
        printf("Digite a média do aluno: ");
        scanf("%d", &student[*contador].media);
        printf("\n");
        printf("Aluno adicionado com sucesso.\n");
        *contador++;
    }
    else
    {
        printf("Limite de alunos atingido.");
    }
}

void showEstudante(estudante student[], int *contador)
{
    for (int i = 0; i < *contador; i++)
    {
        printf("Nome do aluno %d: %s\n", i + 1, student[*contador].nome);
        printf("Média do aluno %d: %s\n", i + 1, student[*contador].media);
    }
}