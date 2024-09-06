/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define ESTUDANTE_MAX 500

typedef struct
{
    char nome[50];
    int nota[4];
    int media;
} estudante;

void addEstudante(estudante student[], int *contador);
void showEstudante(estudante student[], int contador);
float notaEstudante(estudante student[], int *contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
    int contador = 0;
    estudante Student[ESTUDANTE_MAX];

    do
    {
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar alunos\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            addEstudante(Student, &contador);
            break;
        case 2:
            showEstudante(Student, contador);
            break;
        }
    } while (menu != 3);
}

void addEstudante(estudante student[], int *contador)
{
    if (*contador <= ESTUDANTE_MAX)
    {
        printf("Digite o nome do aluno: ");
        fgets(student[*contador].nome, sizeof(student[*contador].nome), stdin);
        for (int i = 0; i < 4; i++)
        {
            printf("Digite a nota %d: ", i + 1);
            scanf("%d", &student[*contador].nota[i]);
            getchar();
        }
        printf("Aluno adicionado com sucesso.\n\n");
        (*contador)++;
    }
    else
    {
        printf("Limite de alunos atingido.\n\n");
    }
}

void showEstudante(estudante student[], int contador)
{
    float med = notaEstudante(student, &contador);
    if (contador == 0)
    {
        printf("Nenhum aluno no sistema.\n\n");
    }
    for (int i = 0; i < contador; i++)
    {
        printf("Nome do aluno %d: %s\n", i + 1, student[i].nome);
        printf("As notas do aluno são: (%d, %d, %d, %d)\n", student[i].nota[0], student[i].nota[1], student[i].nota[2], student[i].nota[3]);
        printf("A média do aluno é: %.2f\n", med);
        printf("\n");
    }
}

float notaEstudante(estudante student[], int *contador)
{
    float soma = 0;
    for (int i = 0; i < *contador; i++)
    {
        soma += student[i].nota[i];
    }
    return soma / 4;
}