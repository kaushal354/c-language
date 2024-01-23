#include<stdio.h>
int evenorodd(int);
main()
{
int n,r;
printf("enter a no\n");
scanf("%d",&n);
r=evenorodd(n);
printf("%d",r);
return 0;
}
int evenorodd(int n)
{
if(n%2==0)
{
return 1;
}
else
{
return 0;
}
}
