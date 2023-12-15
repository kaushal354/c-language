#include<stdio.h>
main()
{
int a;
int i;
int n;
printf("enter a number \n");
scanf("%d",&i);
for(a=0 ; a<=i ; a++)
{
printf("%d",i%10);
i=i/10;
}
if(i==1)
{
printf("%d",i%10);
}
}
