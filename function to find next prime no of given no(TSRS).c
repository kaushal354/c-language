#include<stdio.h>
int primenext(int);
int main()
{
int n,p,x;
printf("enter a number\n");
scanf("%d",&n);
x=n+100;
p=primenext(n);
printf("the next prime no of %d is %d",n,p);
return 0;
}
int primenext(int n)
{
int i,j,b=0,x;
x=n+100;
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
    if(i>n)
    {
        return i;
    }
}
b=0;
}
}
