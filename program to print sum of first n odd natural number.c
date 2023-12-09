#include<stdio.h>
main()
{
int i=1;
int x=0;
int n;
printf("enter a number \n");
scanf("%d",&n);
n=n*2;
do
{
if (i&1==1)
{
    x=i+x;
}
i++;
}while(i<=n);
printf("the sum of first n odd natural number is %d \n",x);

}
