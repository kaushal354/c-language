#include<stdio.h>
main()
{
int a,b,i,j,n,o,k;
printf("enter a first number \n");
scanf("%d",&a);
printf("enter a second number \n");
scanf("%d",&b);
for(i=1,j=1;i<=a||j<=b;i++,j++)
{
n=a%i;
o=b%j;
if(n==0 && o==0)
{
k=i;
k=j;
}
}
printf("HCF is %d",k);
}

