
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
 char op;
 double n1,n2,n3;
 printf("Enter an operator(+,-,*,/,)");
 scanf("%c",&op);
 printf("Enter two operands:");
 scanf("%lf%lf",&n1,&n2);
 switch(op)
 {

    case '+': n3=n1+n2;
            break;
    case '-':n3=n1-n2;

            break;
    case '*':n3=n1*n2;
    break;
    case '/':if(n2!=0)
            {
                n3=n1/n2;
            }
            break;
    default:printf("invalid op\n");
            exit(0);

 }
 if(n2!=0)
    printf("Result =%lf\n",n3);
}
