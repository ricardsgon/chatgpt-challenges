/*Crie um programa em C que d� op��o de adicionar e vizualizar c�meras.*/

#include <stdio.h>
#include <locale.h>

#define MAX_CAMERA 10

typedef struct
{
    char nome[20];
    int IP;
    int Infra;
    int Noturno;
} camera;

void addCamera(camera add[], int *contador);
void showCamera(camera add[], int contador);
void configCamera(camera add[], int *contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
    do
    {
        printf("SISTEMA DE C�MERAS\n\n1 - Adicionar C�mera\n2 - Vizualizar C�mera\n3 - Configurar C�mera\n4 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch(menu){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }       
    }while(menu != 3);
}

void addCamera(camera add[])