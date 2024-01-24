#include<stdio.h>
void primebet(int,int);
int main()
{
int n,x,p;
printf("enter a first no\n");
scanf("%d",&n);
printf("enter a second no\n");
scanf("%d",&x);
primebet(x,n);
return 0;
}
void primebet(int x,int n)
{
int i,j,b=0;
printf("the prime nos between %d and %d is :\n",n,x);
for(i=n;i<=x;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
b=b+1;
}
}
if(b==2)
{
    if(i>n && i<x)
    {
    printf("%d\n",i);
    }
}
b=0;
}
}
