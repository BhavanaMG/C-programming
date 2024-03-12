//factorial
#include<stdio.h>
main()
{
    int a,b,i,fact=1;
    printf("enter the number\n");
    scanf("%d",&a);
    b=a;
    for(i=0;i<b;i++)
    {
        fact=fact*a;
        a=a-1;
    }
    printf("the factorial of the given number is:%d\n",fact);
}
