#include<stdio.h>
int factno(int);
int main()
{
int n,r;
printf("enter a no\n");
scanf("%d",&n);
r=factno(n);
printf("the factorial of is %d",r);
return 0;
}
int factno(int n)
{
int i,v,c=1;
for(i=n;1<i;i--)
{
v=i;
c=v*c;
}
return c;
}
