/*Dados estruturados com pointers*/
#include <stdio.h>
#include <locale.h>

struct Identifiq
{
    int id;
    int idade;

};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct Identifiq  Iden[10];
    struct Identifiq *pointer;

    int parameter = sizeof(Iden) / sizeof(Iden[0]);
    int tamanho;

    printf("Insira a quantidade de Info a ser adicionada(Max: 2): ");
    scanf("%d", &tamanho);
    if (tamanho <= parameter)
    {
        for (int i = 0; i < tamanho; i++)
        {
            pointer = &(Iden[i]);
            printf("ID %d: ", i + 1);
            scanf("%d", &(pointer->id));
            printf("Idade %d: ", i + 1);
            scanf("%d", &(pointer->idade));
        }
    }
    else
    {
        printf("Quantidade acima da capacidade aguentada.");
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Id: %d\n Idade: %d\n", Iden[i].id, Iden[i].idade);
    }
    return 0;
}
