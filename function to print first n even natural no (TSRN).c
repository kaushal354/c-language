#include<stdio.h>
int even_no(int);
int main()
{
int n;
printf("enter a no\n");
scanf("%d",&n);
even_no(n);
return 0;
}
int even_no(int n)
{
int i;
printf("the %d even natural no is\n",n);
n=n*2;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
}
