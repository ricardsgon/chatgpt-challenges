/*Crie um programa em C que simule o jogo do NIM.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int p, player1_escolha, player2_escolha, menu;
    char player1[20];
    char player2[20];
    do
    {
        printf("1 - Mudar Informações do Jogo.\n2 - Iniciar uma partida.\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        printf("\n");
        switch (menu)
        {
        case 1:
            printf("Insira o número de peças: ");
            scanf("%d", &p);
            printf("Insira o nome do Jogador 1: ");
            scanf("%s", &player1);
            printf("Insira o nome do Jogador 2: ");
            scanf("%s", &player2);
            printf("\n");
            break;

        case 2:

            printf("Bem vindos ao jogo do NIM!\nNúmero de peças: %d\nJogadores: %s, %s.\nBOA SORTE!!!\n\n", p, player1, player2);
            while (p >= 0)
            {
                printf("Turno de %s (escolha um número entre 1 e 4): ", player1);
                scanf("%d", &player1_escolha);

                if (player1_escolha < 1 || player1_escolha > 4)
                {
                    printf("Escolha inválida, pulando turno...\n");
                }
                else
                {
                    p -= player1_escolha;
                    printf("Peças restantes: %d\n\n", p);
                    if (p <= 0)
                    {
                        printf("Parabéns, %s!!!\n\n", player2);
                        break;
                    }
                }
                printf("Turno de %s (escolha um número entre 1 e 4): ", player2);
                scanf("%d", &player2_escolha);

                if (player2_escolha < 1 || player2_escolha > 4)
                {
                    printf("Escolha inválida, pulando turno...\n\n");
                }
                else
                {
                    p -= player2_escolha;
                    printf("Peças restantes: %d\n\n", p);
                    if (p <= 0)
                    {
                        printf("Parabéns, %s!!!\n\n", player1);
    
                        break;
                    }
                }
            }
        }
    } while (menu != 3);
}