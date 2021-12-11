#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your nunmber is 1\n");
    }
    else if (num == 2)
    {
        printf("Your number is 2\n");
    }
    else if (num == 3)
    {
        printf("YOur number is 3\n");
    }
    else
    {
        printf("Your number is not there!\n");
    }
    return 0;
}