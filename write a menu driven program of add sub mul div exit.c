#include<stdio.h>
main()
{
int x;
float c,d,e;
printf("Choose a option\n");
printf("1.Addition\t2.Substraction\t3.Multiplication\t4.Division\t5.exit\n");
scanf("%d",&x);
switch(x)
{
case 1:
printf("enter first number\n");
scanf("%f",&c);
printf("enter second number\n");
scanf("%f",&d);
e=c+d;
printf("the addition of two number is %.2f",e);
break;
case 2:
printf("enter first number\n");
scanf("%f",&c);
printf("enter second number\n");
scanf("%f",&d);
e=c-d;
printf("the substraction of two number is %.2f",e);
case 3:
printf("enter first number\n");
scanf("%f",&c);
printf("enter second number\n");
scanf("%f",&d);
e=c*d;
printf("the multiplication of two number is %.2f",e);
break;
case 4:
printf("enter first number\n");
scanf("%f",&c);
printf("enter second number\n");
scanf("%f",&d);
e=c/d;
printf("the division of two number is %.2f",e);
break;
case 5:
break;
}
}
