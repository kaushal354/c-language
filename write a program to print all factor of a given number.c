#include<stdio.h>
main()
{
int a,i,n;
printf("enter a number \n");
scanf("%d",&a);
printf("factor is:\n");
for(i=1;i<=a;i++)
{
n=a%i;
if(n==0)
{
printf("%d\n",i);
}

}


}
