#include<stdio.h>
main()
{
int i=0;
int n;
int a=10;
printf("enter a digit \n");
scanf("%d",&n);
do
{
  n=n/a;
  i=i+1;
}while(n!=0);
printf("%d",i);
}
