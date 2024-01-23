#include<stdio.h>
int sumof1stnno(int);
int main()
{
int n,f;
printf("enter a no\n");
scanf("%d",&n);
f=sumof1stnno(n);
printf("the sum of %d natural no is:%d\n",n,f);
return 0;
}
int sumof1stnno(int n)
{
int i,k=0;
for(i=1;i<=n;i++)
{
k=k+i;
}
return k;
}
