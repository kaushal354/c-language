#include<stdio.h>
main()
{
int a,i,n,k=1;
printf("enter a number\n");
scanf("%d",&a);
for(i=2;a!=1; )
{
n=a%i;
if(n==0)
{
a=a/i;
k=k*i;
printf("%d\n",i);
}
else
{
i++;
}
}
printf("the lcm of the number is %d",k);
}
