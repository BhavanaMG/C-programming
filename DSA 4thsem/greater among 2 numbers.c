//grater among 2 numbers
#include<stdio.h>
main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d,%d",&a,&b);
    if(a>b)
    {
        printf("the first number is greater than second number\n");

    }
    else if(a<b)
    {
        printf("the first number  is smaller than the second number\n");
    }
    else if(a==b)
    {
        printf("the two numbers are equal\n");
    }
}
