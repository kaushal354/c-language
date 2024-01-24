#include<stdio.h>
int primecheck(int);
int main()
{
int n,p;
printf("enter a number\n");
scanf("%d",&n);
p=primecheck(n);
printf("%d\n",p);
return 0;
}
int primecheck(int n)
{
int i,b=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
b=b+1;
}
}
if(b>2)
{
return 0;
}
else if(b==1)
{
return 0;
}
else
{
return 1;
}
}
