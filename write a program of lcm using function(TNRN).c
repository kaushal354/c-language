#include<stdio.h>
void lcm();
main()
{
lcm();
getch();
}
void lcm()
{
int x,y,c,d,k=1,i;
printf("enter a first no\n");
scanf("%d",&x);
printf("enter a second no\n");
scanf("%d",&y);
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
if(c==0 || d==0)
{
k=k*i;
}
if(d!=0 && c!=0)
{
i++;
}
}
printf("lcm is %d",k);
}
