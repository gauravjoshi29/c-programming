#include <stdio.h>
/*
To find the area of a cirle and later
modify the program to calculate the volume
of a cylinder given its radius and height
*/

// This is to calculate area of circle!!
/*int main()
{
    float r;

    printf("Enter the radius of a circle: ");
    scanf("%f", &r);

    printf("The area of circle is: %f", 3.14 * r * r);
    return 0;
}*/

// This is to calculate vol of cylider!!
int main()
{
    float r, h;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    printf("Volume of cylinder is: %f", 3.14 * r * r * h);
    return 0;
}
