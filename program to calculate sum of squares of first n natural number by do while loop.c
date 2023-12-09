#include <stdio.h>
#include <stdlib.h>
main()
{
int i=1;
int n;
int x=0;
int b;
printf("enter a number\n");
scanf("%d",&n);
do
{
 b=i*i;
 x=b+x;
 i++;
}while(i<=n);
printf("the sum of square of n no is %d",x);
}
