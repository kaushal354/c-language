#include<stdio.h>
main()
{
int i=1;
int n;
int x=0;
printf("enter a number \n");
scanf("%d",&n);
while(i<=n)
{
x=x+i;
i++;
}
printf("%d",x);
}
