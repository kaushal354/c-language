#include<stdio.h>
main()
{
int i=0;
int n;
int a=10;
int b;
int c=0;
printf("enter a number \n");
scanf("%d",&n);
do
{
printf("%d",b=n%a);
c=c+b;
n=n/a;
}while(n!=0);
printf("\nthe sum of a given number of a digit is %d\n",c);
}
