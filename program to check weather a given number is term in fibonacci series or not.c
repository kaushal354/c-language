#include<stdio.h>
main()
{
int a=0;
int b=1;
int c;
int n;
printf("enter a number \n");
scanf("%d",&n);
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
}while(c<n);
if(c==n)
{
printf("yes it is fibanico \n");
}
else
{
printf("no it is not fibanico \n");
}
}
