#include<stdio.h>
int natural_no(int);
main()
{
int n;
printf("enter a no\n");
scanf("%d",&n);
natural_no(n);
return 0;
}
int natural_no(int n)
{
int i;
printf("the %d natural no is :\n",n);
for(i=1;i<=10;i++)
{
printf("%d\n",i);
}
}
