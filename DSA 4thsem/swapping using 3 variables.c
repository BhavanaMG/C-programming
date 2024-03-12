//swapping using 3 variables
#include<stdio.h>
int swap(int a,int b);
main()
{
    int a,b;
    printf("enter the numbers to be swapped \n",a,b);
    scanf("%d,%d",&a,&b);
    swap(a,b);
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;


    printf("enter the numbers swapped are %d %d \n",b,a);

}

