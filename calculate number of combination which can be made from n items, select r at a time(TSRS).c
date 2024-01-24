#include<stdio.h>
int com(int,int);
main()
{
int n,r,c;
printf("enter a n item\n");
scanf("%d",&n);
printf("enter a r item\n");
scanf("%d",&r);
c=com(n,r);
printf("the number of combination is %d",c);
return 0;
}
int com(int n,int r)
{
int i,v,x=1,d=1,a,e=1,b,k;
for(i=n;1<i;i--)
{
v=i;
x=v*x;
}
for(i=r;1<i;i--)
{
v=i;
d=v*d;
}
a=n-r;
for(i=a;1<i;i--)
{
v=i;
e=v*e;
}
b=d*e;
k=x/b;
return k;
}
