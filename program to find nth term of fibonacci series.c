#include<stdio.h>
main()
{
int a=0;
int b=1;
int c;
int i=1;
int d;
printf("enter a n term \n");
scanf("%d",&d);
do
{
if(a<=b)
{
c=a+b;
a=c;
}
else
{
c=a+b;
b=c;
}
i++;
}while(i<=d);
printf("%d\n",c);
}
