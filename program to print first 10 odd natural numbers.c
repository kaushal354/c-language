#include<stdio.h>
main()
{
int i=1;
int n=10;
n=n*2;
while(i<=n)
{
if(i&1==1)
{
printf("%d\n",i);
}
i++;
}
}
