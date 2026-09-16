#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int random_num = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess a number\n");
        scanf("%d", &guessed);

        if (guessed > random_num)
        {
            printf("lower number please\n");
        }
        else if (guessed < random_num)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("CONGRATS!");
        }
        number_of_guesses++;
    } while (guessed != random_num);
    printf("you guessed the number in %d tries\n", number_of_guesses);

    return 0;
}