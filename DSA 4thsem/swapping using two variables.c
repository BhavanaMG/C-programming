//swapping using 2 variables
#include<stdio.h>
int swap(int ,int);
int main()
{
    int a,b;
    printf("enter the numbers to be swapped \n",a,b);
    scanf("%d,%d",&a,&b);
    swap(a,b);
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("enter the numbers swapped are %d %d \n",b,a);

}
