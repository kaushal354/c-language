#include<stdio.h>
main()
{
int i;
int n;
int a=0;
int b=1;
int c;
printf("enter a n term \n");
scanf("%d",&n);
for(i=1 ; i<=n ; i++)
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
}
printf("the nth term is %d\n",c);
}
