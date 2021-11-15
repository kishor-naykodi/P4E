#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main(int argc, char const *argv[])
{
    int count = 0;
    int comp_won = 0;
    int user_won = 0;
    int userInp;

    printf("You have to enter : \n0 for Scissor\n1 for Rock and\n2 for Paper \n");

    while (count < 10)
    {

        count = count + 1;
        printf("Enter your input:\n");

        scanf("%d", &userInp);

        int compInp = generateRandomNumber(3);

        if (userInp == compInp)
        {
            printf("Draw");
        }
        else
        {
            switch (userInp)
            {
            case 0:
            {
                if (compInp == 1)
                {
                    printf("You lose\n");
                    comp_won = comp_won + 1;
                }
                else
                {
                    printf("You won\n");
                    user_won = user_won + 1;
                }
                break;
            }

            case 1:
            {
                if (compInp == 0)
                {
                    printf("User won\n");
                    user_won = user_won + 1;
                }
                else
                {
                    printf("You lose\n");
                    comp_won = comp_won + 1;
                }
                break;
            }
            case 2:
            {
                if (compInp == 0)
                {
                    printf("You lose\n");
                    comp_won = comp_won + 1;
                }
                else
                {
                    printf("You won\n");
                    user_won = user_won + 1;
                }
                break;
            }
            }
        }
    }

    printf("");

    if (user_won > comp_won)
    {
        printf("Your score is %d and computer score is %d.\n", user_won, comp_won);
        printf("You won by %d Points", (user_won - comp_won));
    }
    else if (user_won == comp_won)
    {
        printf("Your score is %d and computer score is %d.\n", user_won, comp_won);
        printf("Match draw");
    }
    else
    {
        printf("Your score is %d and computer score is %d.\n", user_won, comp_won);
        printf("You lose\n");
    }

    return 0;
}