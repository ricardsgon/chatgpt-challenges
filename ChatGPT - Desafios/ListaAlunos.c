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
    int quanPresenca;
    int quanFalta;
} estudante;

void addEstudante(estudante student[], int *contador);
void showEstudante(estudante student[], int contador, int contadorPresenca, int contadorFalta);
void removeEstudante(estudante student[], int *contador);
void MarcarPresenca(estudante student[], int contador, int *contadorPresenca, int *contadorFalta);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, ID;
    int contador = 0;
    int contadorFalta = 0;
    int contadorPresenca = 0;
    estudante Student[ESTUDANTE_MAX];

    do
    {
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar alunos\n3 - Remover Aluno\n4 - Marcar Presença\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        printf("\n");
        switch (menu)
        {
        case 1:
            addEstudante(Student, &contador);
            break;
        case 2:
            showEstudante(Student, contador, contadorPresenca, contadorFalta);
            break;
        case 3:
            removeEstudante(Student, &contador);
            break;
        case 4:
            MarcarPresenca(Student, contador, &contadorPresenca, &contadorFalta);
            break;
        }
    } while (menu != 5);
}

void addEstudante(estudante student[], int *contador)
{
    if (*contador < ESTUDANTE_MAX)
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

void showEstudante(estudante student[], int contador, int contadorPresenca, int contadorFalta)
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
        printf("Quantidade de Faltas: %d\n", student[i].quanFalta);
        printf("Quantidade de Presenças: %d\n", student[i].quanPresenca);
        printf("\n");
    }
    printf("Existem %d alunos no sistema.\n", contador);
    printf("Quantidade de presenças totais: %d\n", contadorPresenca);
    printf("Quantidade de faltas totais: %d\n\n", contadorFalta);
}

void removeEstudante(estudante student[], int *contador)
{
    int ID;
    printf("Insira o ID do Aluno que vai ser removido: ");
    scanf("%d", &ID);
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

void MarcarPresenca(estudante student[], int contador, int *contadorPresenca, int *contadorFalta)
{
    int marcar;
    if (contador == 0)
    {
        printf("Nenhum aluno no sistema.\n\n");
    }
    for (int i = 0; i < contador; i++)
    {
        printf("Aluno %sPresente(1 - Sim, 2 - Não): ", student[i].nome);
        scanf("%d", &marcar);
        if (marcar == 1)
        {
            student[i].quanPresenca++;
            (*contadorPresenca)++;
        }
        else
        {
            student[i].quanFalta++;
            (*contadorFalta)++;
        }
    }
}