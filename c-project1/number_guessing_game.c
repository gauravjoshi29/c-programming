#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; //Generates random number between 1-100
    //printf("The number is %d\n", number);
    // Keep running the loop until the numbre is guessed
    do
    {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}