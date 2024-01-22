#include<stdio.h>
void LCM(int,int);
main()
{
int x,y;
printf("enter a first no\n");
scanf("%d",&x);
printf("enter a second no\n");
scanf("%d",&y);
LCM(x,y);
}
void LCM(int x,int y)
{
int c,d,k=1,i;
for(i=2;x!=1||y!=1;)
{
c=x%i;
d=y%i;
if(c==0)
{
x=x/i;
}
if(d==0)
{
y=y/i;
}
if(c==0||d==0)
{
k=k*i;
}
if(d!=0 && c!=0)
{
i++;
}
}
printf("Lcm is %d",k);
}
