#include <stdio.h>
//Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); //Function prototype declearation
int main()
{
    int result;
    result = sum(9, 5); //Function call
    printf("Result is %d\n", result);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
