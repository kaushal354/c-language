#include<stdio.h>
main()
{
int i;
int n;
int b=0;
printf("enter a n number \n");
scanf("%d",&n);
n=n*2;
for(i=1 ; i<=n ; i++)
{
if(i & 1 == 1)
{
b=i+b;
}
}
printf("%d\n",b);
}
