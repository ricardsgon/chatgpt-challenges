/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define ESTUDANTE_MAX 500

typedef struct
{
    char nome[50];
    float nota[4];
    float media;
} estudante;

void addEstudante(estudante student[], int *contador);
void showEstudante(estudante student[], int contador);
void removeEstudante(estudante student[], int *contador, int ID);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, ID;
    int contador = 0;
    estudante Student[ESTUDANTE_MAX];
    
    do
    {
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar alunos\n3 - Remover Aluno\n4 - Sair\n");
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
        case 3:
            printf("Insira o ID do Aluno que vai ser removido: ");
            scanf("%d", &ID);
            removeEstudante(Student, &contador, ID);
        }
    } while (menu != 4);
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
            scanf("%f", &student[*contador].nota[i]);
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
    if (contador == 0)
    {
        printf("Nenhum aluno no sistema.\n\n");
    }
    for (int i = 0; i < contador; i++)
    {
        printf("Nome do aluno (ID %d): %s", i + 1, student[i].nome);
        printf("As notas do aluno são: (%.1f, %.1f, %.1f, %.1f)\n", student[i].nota[0], student[i].nota[1], student[i].nota[2], student[i].nota[3]);
        student[i].media = (student[i].nota[0] + student[i].nota[1] + student[i].nota[2] + student[i].nota[3]) / 4.0;
        printf("A média do aluno é: %.2f\n", student[i].media);
        printf("\n");
    }
    printf("Existem %d alunos no sistema.", contador);
}

void removeEstudante(estudante student[], int *contador, int ID)
{
    for (int i = 0; i < *contador; i++)
    {
        if (ID == *contador)
        {
            for (int j = i; j < *contador - 1; j++)
            {
                student[j] = student[j + 1];
            }
        }
        else
        {
            printf("Aluno não encontrado.");
        }
        (*contador)--;
    }
}