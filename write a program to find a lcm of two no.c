#include<stdio.h>
main()
{
    int a,b,c,d,k=1,i;
    printf("enter a first number \n");
    scanf("%d",&a);
    printf("enter a second number \n");
    scanf("%d",&b);
for(i=2;a!=1,b!=1;)
{
    c=a%i;
    d=b%i;
    if(c==0)
    {
        a=a/i;
    }
    if(d==0)
    {
        b=b/i;
    }
if(c==0 || d==0)
{
    k=k*i;
}
if(d!=0 || c!=0)
{
    i++;
}
}
printf("lcm is %d\n",k);
}
