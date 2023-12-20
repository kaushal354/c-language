#include<stdio.h>
main()
{
int i;
int x;
int b=0;
printf("enter a number \n");
scanf("%d",&x);
for (i=1;i<=x;i++)
{
if(x%i==0)
{
b=b+1;
}
}
if(b>2)
{
    printf("it is not prime no");
}
else if(b==1)
{
    printf("it is not prime no ");
}
else
{
    printf("it is prime no ");
}
}
