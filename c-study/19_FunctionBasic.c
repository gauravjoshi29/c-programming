#include <stdio.h>
void display(); //Function Prototype
int main()
{
    int a;
    printf("Initializing display function...\n");
    display(); //Function call
    printf("Display function finished its work!\n");
    return 0;
}
void display()
{
    printf("___This is display___\n"); //Function defination
}