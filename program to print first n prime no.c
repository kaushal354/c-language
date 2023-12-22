#include<stdio.h>
main()
{
int i;
int n;
int b=0;
int j;
int c=0;
int d;
printf("enter a number \n");
scanf("%d",&n);
d=n*100;
for(i=1 ; i<=d ; i++)
{
for(j=1 ; j<=i ; j++)
{
    if(i%j==0)
    {
        b=b+1;
    }
}
if(b==2)
{
c=c+1;
if(c<=n)
{
    printf("%d\n",i);
}
else
{
    break;
}
}
else if(b==1)
{
 //happy birthday
}
else
{
//happy birthday
}
b=0;
}
}
