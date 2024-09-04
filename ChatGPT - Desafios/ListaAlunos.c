/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char nome[20];
    int nota[4];
    int media;
} aluno;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, i, quan;
    aluno struc[50];
    aluno *pointer;
    int numaluno = 0;
    int max = sizeof(struc) / sizeof(struc[0]);

    do
    {
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar Alunos\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            printf("Insira a quantidade de alunos(Max - %d): ", max);
            scanf("%d", &quan);
            getchar();
            if (quan <= max)
            {
                for (i = 0; i < quan; i++)
                {
                    pointer = &struc[i];
                    printf("Nome do Aluno %d: ", i + 1);
                    fgets(pointer->nome, sizeof(pointer->nome), stdin);
                    pointer->nome[strcspn(pointer->nome, "\n")]=0;
                    printf("  Média do Aluno: ");
                    scanf("%d", &pointer->media);
                    getchar();
                }
                numaluno += quan;
            }
            printf("\n");
            break;
        case 2:

        case 3:
            if (numaluno == 0)
            {
                printf("Nenhum Aluno no Sistema.\n");
                break;
            }
            for (i = 0; i < numaluno; i++)
            {
                pointer = &struc[i];
                printf("Nome %d: %s\n", i + 1, pointer->nome);
                printf("  Média: %d\n", pointer->media);
                printf("\n");
            }
        }
    } while (menu != 3);
    return 0;
}