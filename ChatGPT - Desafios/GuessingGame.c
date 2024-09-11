/*Crie um programa em C que implemente um jogo da adivinhação.(em inglês)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void settings(int *x, int *y);
void game(int x, int y);

int main()
{
    int menu;
    int x = 0;
    int y = 0;
    do
    {
        printf("Guessing Game\n\n1 - Start game\n2 - Settings\n3 - Quit\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            game(x, y);
            break;
        case 2:
            settings(&x, &y);
            break;
        }
    } while (menu != 3);
    return 0;
}
void settings(int *x, int *y)
{
    printf("Choose the min: ");
    scanf("%d", y);
    printf("Choose the max: ");
    scanf("%d", x);
}

void game(int x, int y)
{
    srand(time(NULL));
    if (x == 0)
    {
        printf("Configure the game first at Settings.\n\n");
        return;
    }
    int num = rand() % (x - y + 1) + y;
    int choice, tentativa = 0;
    do
    {
        printf("Guess: ");
        scanf("%d", &choice);
        if (choice < num)
        {
            printf("Chosen number is lower than the random number. Try again.\n");
            tentativa++;
        }
        else if (choice > num)
        {
            printf("Chosen number is greater than the random number. Try again.\n");
            tentativa++;
        }
        else
        {
            printf("Congratulations! The correct number was: %d\n", num);
        }
    } while (choice != num);
}