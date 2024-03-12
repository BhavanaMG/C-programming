//linear search using array
#include<stdio.h>
main()
{
  int array[10]={10,20,30,40,50,60,70,80,90,100};
  int key,i, found=0;
  printf("enter the element to search\n");
  scanf("%d",&key);
  for(i=0;i<10;i++)
  {
      if(key==array[i])
      {
          found=1;
          break;
      }
  }
    if(found==1)
     {


      printf("the key element is  found in array\n");

     }

     else
     {
        printf("the key element is not found in array\n");
     }
     return 0;
  }


