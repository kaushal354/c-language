#include<stdio.h>
main()
{
int x;
printf("enter a number : \n");
scanf("%d",&x);
if(x>0)
{
printf("the number will be positive ");
}
else if(x=0)
{
printf("the number will be zero");
}
else
{
printf("the number will be negative");
}
getch();
}
