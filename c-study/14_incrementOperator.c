#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i++ is %d\n", i++); //++i means first increment then print and i++ is vice versa
    printf("The value of i is %d\n", i);

    i += 10; // += is compund increment operator // increment i by 10
    printf("The value of i is %d\n", i);
    return 0;
}