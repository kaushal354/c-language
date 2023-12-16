#include<stdio.h>
main()
{
int a,i,n;
printf("enter a number which table you want to print \n");
scanf("%d",&n);
for(i=1 ; i<=10 ; i++)
{
a=n*i;
printf("%d\n",a);
}
}
