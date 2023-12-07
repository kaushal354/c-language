#include<stdio.h>
main()
{
int i=0;
int n;
printf("enter a value\n");
scanf("%d",&n);
n=n*2;
while(n>i)
{
if(n&1==1)
{
printf("%d\n",n);
}
n--;
}
}
