//array reverse
#include<stdio.h>
main()
{
    int array[5]={1,2,3,4,5};
    int x,i;
    printf("Enter 1 for normal display of array\n enter 0 for reversed display of array\n ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("the normal array is:\n");
        for(i=0;i<5;i++)
        {
            printf("%d",array[i]);
        }
    }
    else if (x==0)
    {
      printf("the reversed array is:\n");
        for(i=4;i>=0;i--)
        {
            printf("%d",array[i]);
    }
    }
    else
    {
        printf("invalid input\n");
    }
}
