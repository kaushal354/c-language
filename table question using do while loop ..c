#include<stdio.h>
main()
{
int i=1,n,a;
printf("enter a number which table you want to print \n");
scanf("%d",&n);
do
{
a=n*i;
printf("%d\n",a);
i++;
}while(i<=10);
}
