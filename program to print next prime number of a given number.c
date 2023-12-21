#include<stdio.h>
main()
{
int i;
int x;
int b=0;
int j;
int c;
printf("enter a first number \n");
scanf("%d",&c);
x=c+100;
for(i=c ; i<=x ; i++)
{
for(j=1 ; j<=i ; j++)
{
if(i%j==0)
{
b=b+1;
}
}
if(b>2)
{
//happy birthday
}
else if (b==1)
{
//happy birthday
}
else
{
if(i>c)
{
    printf("%d\n",i);
    break;
}
}
b=0;
}
}
