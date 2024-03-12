// choose check whether nmber is +ve -ve and area od circle
#include<stdio.h>
main()
{
    int choice,r,n,area;
    printf("1:tho check +ve,-ve\n 2:area of circle\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :printf("enter the number\n");
                scanf("%d",&n);
                if(n>0)
                {
                    printf("number is positive\n");
                }

                else
                {
                    printf("the number is negative\n");
                    break;
                }

        case 2 :printf("enter the radius\n");
                scanf("%d",&r);
                area=3.142*r*r;
                printf("the the area of circle is %d",area);
                break;
        default :("invalid  choice\n");
         break;
                    }
}

