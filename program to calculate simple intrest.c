#include <stdio.h>
/*
To calculate simple intrest!! (prt)/100 
*/

int main()
{
    float p, r, t;

    printf("Enter Amount (in rupees): ");
    scanf("%f", &p);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    printf("Enter Rate of Intrest(in percentage): ");
    scanf("%f", &r);

    printf("S.I: %f", (p * t * r) / 100);
    return 0;
}
