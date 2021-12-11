#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter age\n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || !(vipPass == 1)) // "!" is NOT operator
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
    return 0;
}
