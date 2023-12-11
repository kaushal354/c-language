#include<stdio.h>
main()
{
int i=0;
int n;
int a=10;
int b;
int c=0;
printf("enter a number \n");
scanf("%d",&n);
do
{
printf("%d",b=n%10);
c=c+b;
n=n/10;
}while(n!=0);


}
