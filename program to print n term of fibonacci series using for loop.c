#include<stdio.h>
main()
{
int i;
int n;
int a=0;
int b=1;
int c;
printf("enter a no whom which you want to print fibonacci series :\n");
scanf("%d",&n);
for(i=1 ; i<=n ; i++)
{
if(a<=b)
{
c=a+b;
printf("%d\n",c);
a=c;
}
else
{
c=a+b;
printf("%d\n",c);
b=c;
}
}
}
