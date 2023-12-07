#include<stdio.h>
main()
{
int i=0;
int n;
printf("enter a number \n");
scanf("%d",&n);
n=n*2;
while(n>i)
{
if(n%2==0)
{
printf("%d\n",n);
}
n--;
}
}
