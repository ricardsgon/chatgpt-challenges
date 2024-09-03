/*Crie um programa em C para gerenciar as notas de alunos em uma turma.*/
#include <stdio.h>
#include <locale.h>
typedef struct{
    char nome[20];
    int notas[4];
}aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    aluno struc[5];
    int numaluno;
    
    for(int i = 0; i < 5; i++){
        printf("Nome: ");
        fgets(struc[i].nome, sizeof(struc->nome));

        
    }
    aluno struc = {Ricardo,};
    do{
    printf("SIMULADOR DE SISTEMA ESTUDANTIL\n1 - Adicionar Aluno\n2 - Listar Alunos\n3 - Sair\n");
    printf("--> ");
    scanf("%d", &menu);
    switch(menu){
        case 1: 

    }
    }
}