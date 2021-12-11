#include <stdio.h>
#include <math.h> //To import pow() function

int main()
{
    int a = 4;
    int b = 9;
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    int z;
    z = b * a; //Legal!!
    // a*b = z //Illegal!!
    printf("The value of z is: %d\n", z);

    printf("5 when divided by 2 leaves remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves remainder of %d\n", 5 % 2); //Numerator sign is followed

    //No operator is assumed to be present
    // printf("The value of 4*5 is %d\n", (4)(5)); //Wrong!!
    printf("The value of 4*5 is %d\n", (4) * (5)); //Right!!

    //There is no operator to perform exponentiation in C
    printf("The value of 4 ^ 5 is %d\n", 4 ^ 5); // Will not produce 4^5
    printf("The value of 4 ^ 5 is %f\n", pow(4, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);

    return 0;
}
