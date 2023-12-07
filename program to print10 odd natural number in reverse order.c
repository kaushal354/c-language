#include<stdio.h>
main()
{
int i=0;
int n=10;
n=n*2;
while(i<n)
{
if(n&1==1)
{
printf("%d\n",n);
}
n--;
}
}
