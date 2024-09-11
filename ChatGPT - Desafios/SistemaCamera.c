/*Crie um programa em C que dê opção de adicionar e vizualizar câmeras.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX_CAMERA 10

typedef struct
{
    char nome[20];
    int IP;
    int modo;
    int status;
} camera;

void addCamera(camera add[], int *contador);
void showCamera(camera add[], int contador);
void configCamera(camera add[], int *contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
    int contador = 0;
    camera Cam[MAX_CAMERA];
    do
    {
        printf("SISTEMA DE CÂMERAS\n\n1 - Adicionar Câmera\n2 - Vizualizar Câmeras\n3 - Configurar Câmera\n4 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            addCamera(Cam, &contador);
            break;
        case 2:
            showCamera(Cam, contador);
            break;
        case 3:
            configCamera(Cam, &contador);
            break;
        }
    } while (menu != 4);
}

void addCamera(camera add[], int *contador)
{
    if (*contador < MAX_CAMERA)
    {
        printf("Nome da Câmera: ");
        fgets(add[*contador].nome, sizeof(add[*contador].nome), stdin);
        printf("IP da Câmera: ");
        scanf("%d", &add[*contador].IP);
        add[*contador].status = 1;
    }
    else
    {
        printf("Limite atingido.");
    }
    (*contador)++;
}

void showCamera(camera add[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhuma câmera no sistema.\n");
    }
    else
    {
        for (int i = 0; i < contador; i++)
        {
            printf("Câmera %d: %s", i, add[i].nome);
            printf("IP: %d\n", add[i].IP);
            if (add[i].status == 1)
            {
                printf("Status: ON\n");
            }
            else
            {
                printf("Status: OFF\n");
            }
            if (add[i].modo == 1)
            {
                printf("Modo: Noturno\n");
            }
            else
            {
                printf("Modo: Infravermelho\n");
            }
        }
        printf("\n");
        printf("Total de Câmeras: %d\n", contador);
    }
}

void configCamera(camera add[], int *contador)
{
    int menu, id;
    if(*contador == 0){
        printf("Nenhuma câmera no Sistema.\n");
        return;
    }else{
    printf("Digite o número da câmera que vai ser modificada: ");
    scanf("%d", &id);
    printf("\n");
    }
    if (id >= *contador)
    {
        printf("Câmera não encontrada no sistema.\n");
    }else{
    do
    {
        printf("\n");
        printf("1 - Mudar nome\n2 - Mudar IP\n3 - ON/OFF\n4 - Modo\n5 - Excluir\n6 - Sair\n");
        printf("> ");
        scanf("%d", &menu);
        getchar();
        printf("\n");
        switch (menu)
        {
        case 1:
            printf("Insira o novo nome: ");
            fgets(add[id].nome, 20, stdin);
            break;
        case 2:
            printf("Insira o novo IP: ");
            scanf("%d", &add[id].IP);
            break;
        case 3:
            printf("1 - Ligar\n2 - Desligar\n");
            scanf("%d", &add[id].status);
            break;
        case 4:
            printf("1 - Modo Noturno\n2 - Modo Infravermelho\n");
            scanf("%d", &add[id].modo);
            break;
        case 5:
            for (int y = id; y < *contador - 1; y++)
            {
                add[y] = add[y + 1];
            }
            (*contador)--;
            return;
        }
    } while (menu != 6);
    }
}
