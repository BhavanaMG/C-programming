//sum of elements in an array
#include<stdio.h>
main()
{
int array[3]={1,2,3};
int i,sum=0;
for(int i=0;i<3;i++)
{

    sum=sum+array[i];


}
printf("The sum of array elements are:%d\n",sum);
return 0;
}
