// check leap year or no
#include<stdio.h>
int leapyear(int);
int main()
{
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    leapyear (a);
}
int leapyear(int a)
{
    if((a)%4==0)
    {
        printf("the year is a leap year\n");
    }
    else
    {
        printf("the year  is not a leap year\n");
    }
}
