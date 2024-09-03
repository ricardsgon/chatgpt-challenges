/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/
#include <stdio.h>
#include <locale.h>
typedef struct
{
    char nome[20];
    int nota[4];
    int media;
} aluno;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, i;
    aluno struc[50];
    int numaluno = 0;

    do
    {
        printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar Alunos\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Insira a quantidade de alunos: ");
            scanf("%d", &numaluno);
            for (i = 0; i < numaluno; i++)
            {
                printf("Nome %d: ", i + 1);
                getchar();
                fgets(struc[i].nome, sizeof(struc[i].nome), stdin);
                for (i = 0; i < 4; i++)
                {
                    printf("Notas %d: ", i + 1);
                    scanf("%d", &struc[i].nota[i]);
                    printf("\n");
                }
            }
            break;
        case 2:
        
        case 3:
            if (numaluno == 0)
            {
                printf("Nenhum Aluno no Sistema.");
                break;
            }
            for (i = 0; i < numaluno; i++)
            {

                printf("Nome %d: %s", i + 1, struc[i].nome);
                printf("Média %d: %d\n", i + 1, struc[i].media);
                printf("\n");
            }
        }
    } while (menu != 3);
    return 0;
}