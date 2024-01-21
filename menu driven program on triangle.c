#include<stdio.h>
main()
{
int a,b,c,x,d,e;
printf("choose a option\n");
printf("1.check weather a given set of three numbers are length of isosceles triangle or not\n");
printf("2.check weather a given set of a three numbers are lengths of sides of a right angled triangle or not\n");
printf("3.check weather a given set of three number are equilateral triangle or not\n");
printf("4.exit\n");
scanf("%d",&x);
switch(x)
{
case 1:
printf("enter a first number of sides of triangle\n");
scanf("%d",&a);
printf("enter a second number of sides of triangle\n");
scanf("%d",&b);
printf("enter a third number of sides of triangle\n");
scanf("%d",&c);
if(a==b)
{
printf("it is a isoceles triangle");
}
else if(b==c)
{
printf("it is a isoceles triangle");
}
else if(a==c)
{
printf("it is a isoceles triangle");
}
else
{
printf("it is not a isoceles traingle");
}
break;
case 2:
printf("enter a first number of sides of triangle\n");
scanf("%d",&a);
printf("enter a second number of sides of triangle\n");
scanf("%d",&b);
printf("enter a third number of sides of triangle\n");
scanf("%d",&c);
a=a*a;
b=b*b;
c=c*c;
if(a+b==c)
{
printf("it is a right angle triangle\n");
}
else if(b+c==a)
{
printf("it is a right angle triangle\n");
}
else if(c+a==b)
{
printf("it is a right angle triangle\n");
}
else
{
printf("it is not a right angle triangle\n");
}
break;
case 3:
printf("enter a first number of sides of triangle\n");
scanf("%d",&a);
printf("enter a second number of sides of triangle\n");
scanf("%d",&b);
printf("enter a third number of sides of triangle\n");
scanf("%d",&c);
if(a==b==c)
{
printf("it is a equilateral triangle\n");
}
else
{
printf("it is not a equilateral triangle\n");
}
break;
case 4:
break;
default:
printf("invalid option select");
}
}
