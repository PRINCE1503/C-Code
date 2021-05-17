// Roke Paper Scissor Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int GenrateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 = 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 = 's'))
    {
        return 1;
    }

    else if ((c1 == 'p') && (c2 = 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 = 'r'))
    {
        return 1;
    }
    else if ((c1 == 's') && (c2 = 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 = 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int player_score = 0;
    int computer_score = 0;
    int temp;
    char player_char, computer_char;
    char dict[] = {'r', 'p', 's'};
    printf("\n********************Welcome to the >> Stone, Paper, Scissor << Game********************\n");
    for (int i = 0; i < 3; i++)
    {
        // Take Player 1's Input
        printf("Your turn: \n");
        printf("Choose 1 for Roke, 2 for Paper Or 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        player_char = dict[temp - 1];
        printf("You choose %c\n\n", player_char);

        // Generate Coputer's Input
        printf("Computer's turn: \n");
        printf("Choose 1 for Roke, 2 for Paper Or 3 for Scissor\n");
        temp = GenrateRandomNumber(3) + 1;
        computer_char = dict[temp - 1];
        printf("Computer choose %c\n\n", computer_char);

        if (greater(computer_char, player_char) == 1)
        {
            computer_score += 1;
            printf("Computer got it!\n");
        }
        else if (greater(computer_char, player_char) == -1)
        {
            computer_score += 1;
            player_score += 1;
            printf("It's a Draw!\n");
        }
        else
        {
            player_score += 1;
            printf("You got it!\n");
        }
        printf("\nYou: %d\nComputer: %d\n\n", player_score, computer_score);
    }
    if (player_score > computer_score)
    {
        printf("Congratulation! You won the Game!");
    }
    else if (player_score < computer_score)
    {
        printf("Well try! You loss the Game!");
    }
    else
    {
        printf("It's a Draw!!");
    }

    return 0;
}