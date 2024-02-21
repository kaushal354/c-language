#include<stdio.h>
#include<stdlib.h>
int armstrong(int);
int armstrong2(int,int);
int main()
{
int x,y,z,a,i;
printf("enter a first number \n");
scanf("%d",&x);
printf("enter a second number\n");
scanf("%d",&a);
for(i=x;i<=a;i++)
{
y=armstrong(i);
z=armstrong2(i,y);
if(i==z)
{
    printf("%d\n",i);
}
}
}
int armstrong(int x)
{
int i,b,c=0;
for(i=x;i!=0;)
{
    i=i/10;
    c=c+1;
}
return c;
}
int armstrong2(int x,int y)
{
    int i,b,j,c=1,d=0;
    for(i=x;i!=0;)
    {
        b=i%10;
        for(j=1;j<=y;j++)
        {
            c=b*c;
        }
        d=d+c;
        i=i/10;
        c=1;
    }
    return d;
}

