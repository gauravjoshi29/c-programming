#include <stdio.h>
void change(int a);
int main()
{
    int b = 334;
    printf("The value of b before change function is %d\n", b);
    change(b);
    printf("The value of b after change function is %d\n", b);

    return 0;
}
void change(int b)
{
    b = 77;
}