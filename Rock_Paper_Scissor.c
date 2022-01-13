#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int lower = 1, upper = 3;
    int i;
    int input;
    int comp_score = 0, your_score = 0;
    printf("----Welcome to ROCK PAPER AND SCISSOR---\n\n");

    while (comp_score <= 3 || your_score <= 3)
    {
        printf("\n1. ROCK\n2. PAPER\n3. SCISSORS\n");
        printf("\nEnter your choice:");
        scanf("%d", &input);
        srand(time(NULL));
        number = (rand() % (upper - lower + 1)) + lower;
        //printf("%d\n", number);
        if (number == 1)
        {
            printf("Computer: Rock\n");
        }
        else if (number == 2)
        {
            printf("Computer: Paper\n");
        }
        else
            printf("Computer: Scissors\n");
        sleep(1);
        if (input == 1 && number == 2)
        {

            printf("computer WINS!\n");
            comp_score++;
        }
        else if (input == 2 && number == 1)
        {
            printf("you WIN!\n");
            your_score++;
        }
        else if (input == 2 && number == 3)
        {
            printf("Computer WIN!\n");
            comp_score++;
        }
        else if (input == 3 && number == 2)
        {
            printf("You WIN!\n");
            your_score++;
        }
        else if (input == 3 && number == 1)
        {
            printf("Computer WIN!\n");
            comp_score++;
        }
        else if (input == 1 && number == 3)
        {
            printf("you WIN!\n");
            your_score++;
        }
        else
            printf("Tie!!\n");

        if (comp_score == 3)
        {
            printf("Winner Computer!!!\n");
            break;
        }
        else if (your_score == 3)
        {
            printf("Winner YOU!!!\n");
            break;
        }
    }

    return 0;
}
