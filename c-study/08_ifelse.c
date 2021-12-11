#include <stdio.h>

int main()
{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);

    if (age > 90)
    {
        printf("Your age is above 90, you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age == 50)
    {
        printf("Half Century\n");
    }
    return 0;
}