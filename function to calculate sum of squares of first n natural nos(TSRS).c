#include<stdio.h>
int sumofsqrsofnnno(int);
main()
{
int n,d;
printf("enter a no\n");
scanf("%d",&n);
d=sumofsqrsofnnno(n);
printf("the sum of squares of first %d natural no is %d",n,d);
return 0;
}
int sumofsqrsofnnno(int n)
{
int i,r,c=0;
for(i=1;i<=n;i++)
{
r=i*i;
c=c+r;
}
return c;
}
