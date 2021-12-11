#include <stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main()
{
    good_morning(); //Calls good_morning
    return 0;
}
void good_morning() //Calls good_afternoon
{
    printf("Good Morning\n");
    good_afternoon();
}
void good_afternoon() //Calls good_night
{
    printf("Good Afternoon\n");
    good_night();
}
void good_night() //Calls nothing
{
    printf("Good Night\n");
}