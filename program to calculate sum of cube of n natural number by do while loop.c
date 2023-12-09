#include<stdio.h>
main()
{
int i=1;
int n;
int x=0;
int b;
printf("enter a numbers\n");
scanf("%d",&n);
do
{
b=i*i*i;
x=b+x;
i++;
}while(i<=n);
printf("the sum of cube of first n natural number is %d\n",x);
getch();
}
