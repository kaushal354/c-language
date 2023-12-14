#include<stdio.h>
main()
{
int i;
int n;
int a;
int b=0;
printf("enter a number \n");
scanf("%d",&n);
for(i=1 ; i<=n ; i++)
{
a=i*i;
b=b+a;
}
printf("%d\n",b);
}
