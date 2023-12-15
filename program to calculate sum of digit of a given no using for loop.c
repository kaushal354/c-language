#include<stdio.h>
main()
{
int a=0;
int i;
int n;
int b=0;
printf("enter a number \n");
scanf("%d",&i);
for(a=0 ; a<=i ; a++)
{
n=i%10;
i=i/10;
b=b+n;
}
if(i==1)
{
n=i%10;
b=b+n;
}
printf("%d",b);
}
