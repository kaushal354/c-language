#include<stdio.h>
main()
{
int i;
int n;
int a=1;
int b;
printf("enter a number \n");
scanf("%d",&n);
for(i=0 ; i<n ; i++)
{
b=n-i;
a=a*b;
}
printf("%d",a);

}
