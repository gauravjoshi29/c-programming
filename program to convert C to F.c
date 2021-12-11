#include <stdio.h>

/*
To convert celcius to farenheit!!
*/

int main()
{
    float c;

    printf("Enter degree (in celcius): ");
    scanf("%f", &c);

    printf("Degree in Farenheit: %f", (9 * c) / 5 + 32);
    return 0;
}
