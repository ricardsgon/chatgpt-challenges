/*Escreva um programa em C para gerenciar um sistema de biblioteca.*/
#include <stdio.h>
#include <locale.h>
#define MAX_BOOKS 100

typedef struct
{
    char titulo[100];
    char autor[100];
    int ano;
    int numexamplar;
} Livro;

void addLivro(Livro livro[], int *contador);
void listarLivros(Livro livro[], int contador);
void procurarTitulo(Livro livro[]);
void emprestarLivro(Livro livro[]);
void devolverLivro(Livro livro[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, contador = 0;
    printf("BIBLIOTECA\n\n1 - Adicionar Livro\n2 - Listar Livros\n3 - Buscar por t�tulo\n4 - Emprestar Livro\n5 - Devolver Livro\n6 - Sair\n");
    printf("--> ");
    scanf("%d", &menu);
    getchar();
    switch (menu)
    {
    case 1:
    }
}
void addLivro(Livro livro[], int *contador)
{
    if (*contador >= MAX_BOOKS)
    {
        printf("N�mero limite atingido.");
        return;
    }
    printf("T�tulo do Livro: ");
    fgets(livro[*contador].titulo, sizeof(livro[*contador]).titulo, stdin);
    printf("Nome do Autor: ");
    fgets(livro[*contador].autor, sizeof(livro[*contador].autor), stdin);
    printf("Ano de Publica��o: ");
    scanf("%d", &livro[*contador].ano);
    printf("N�mero de exemplares dispon�veis: ");
    scanf("%d", livro[*contador].numexamplar);
    (*contador)++;
}
void listarLivros(Livro livro[], int contador)
{
    if(contador == 0){
        printf("Nenhum livro na biblioteca.");
        return;
    }
    printf("BIBLIOTECA\n\n");
    for(int i = 0; i < contador; i++){
        printf("Livro %d\n", i+1);
        printf("T�tulo: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].)
    }
}