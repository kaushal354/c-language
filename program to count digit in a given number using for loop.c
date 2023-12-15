#include<stdio.h>
main()
{
int i;
int a;
printf("enter a number \n");
scanf("%d",&i);
for(a=1 ; a<i  ; a++)
{
i=i/10;
}
if(i==0)
{
printf("%d",a+1);
}
else
{
printf("%d",a);
}
}
