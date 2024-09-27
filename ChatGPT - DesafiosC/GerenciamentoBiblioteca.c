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
    printf("BIBLIOTECA\n\n1 - Adicionar Livro\n2 - Listar Livros\n3 - Buscar por título\n4 - Emprestar Livro\n5 - Devolver Livro\n6 - Sair\n");
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
        printf("Número limite atingido.");
        return;
    }
    printf("Título do Livro: ");
    fgets(livro[*contador].titulo, sizeof(livro[*contador]).titulo, stdin);
    printf("Nome do Autor: ");
    fgets(livro[*contador].autor, sizeof(livro[*contador].autor), stdin);
    printf("Ano de Publicação: ");
    scanf("%d", &livro[*contador].ano);
    printf("Número de exemplares disponíveis: ");
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
        printf("Título: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].)
    }
}