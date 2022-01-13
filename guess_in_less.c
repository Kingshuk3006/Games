#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number;
    int lower = 10, upper = lower + (5 * 5);
    int input, i;
    int score = 100;

    printf("\t\t  =====Guess in Less=====\n");
    printf("\t=====The ultimate Test of your luck!!!=====\n");
    printf("\n\t\t-----------------------\n\t\t\tGame Rules\n1. You have to guess the random number in a specific range.\n");
    printf("2.For Each Wrong guess The range will decrease by 5 from the upper limit\n");
    printf("3.You will have maximum 5 Attempts to guess correctly\n");
    printf("4.After each wrong attempts your Score will decrease by 10\n");
    printf("4.After each attempt the number will be renewed !!\n");
    printf("\n\t\t-----------------------\n");

    printf("Your upper limit is %d and lower limit is %d", upper, lower);
    upper += 5;

    for (i = 0; i < 5; i++)
    {
        srand(time(NULL));
        number = (rand() % ((upper -= 5) - lower + 1)) + lower;
        //sleep(1);

        printf("\n\n%d Attempts remaining\nGuess number in b/w %d and %d \nEnter your Number: ", 5 - i, lower, upper);
        scanf("%d", &input);
        if (number == input)
        {
            printf("Your guess is correct!!\n");
            printf("Your score is : %d", score);
            _Exit(0);
        }

        else
        {
            printf("Wrong guess!!\n");
            printf("\nThe number was: %d\n", number);
            score -= 20;
        }
    }
    if (score == 0)
    {
        printf("\n\n YOU FALIED!!!\n\n");
    }
    return 0;
}