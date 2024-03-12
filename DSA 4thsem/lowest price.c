//lowest price
#include<stdio.h>
int x[5],i;
main()
{
   int n;
   void read_array(int n);
   void display_array(int n);
   void lowest_price(int n);
   printf("enter n value\n");
   scanf("%d",&n);
   if(n>=1 && n<=5)
   {
       read_array(n);
       display_array(n);
       lowest_price(n);
   }
   else
   {
       printf("Invalid n value\n");
   }

 }

 void read_array(int n)
 {

     for(i=0;i<n;i++)
      {
      printf("enter a value\n");
      scanf("%d",&x[i]);
      }
 }

void display_array(int n)
{

     printf("the elements in the array are\n");
    for(i=0;i<n;i++)
     {
      printf("%d ",x[i]);
     }
}


void lowest_price(int n)
{
 int min=x[0];
 for(i=0;i<n;i++)
 {
     if(x[i]<min)
     {
        min=x[i];
     }
 }
 printf("lowest priced item =%d\n",min);
}
