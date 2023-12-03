#include<stdio.h>
main()
{
printf("program to find the nature of roots of a given quadratic equation\n");
int a,b,c,d;
printf("enter a value of a \n");
scanf("%d",&a);
printf("enter a  value of b \n");
scanf("%d",&b);
printf("enter a value of c \n");
scanf("%d",&c);
b=b*b;
c=4*a*c;
d=b-c;
if(d>0)
{
printf("nature of roots is real and distinct");
}
else if(d=0)
{
  printf("nature of roots are real and equal");
}

else
{
  printf("nature of roots are not real");
}

getch();
}
