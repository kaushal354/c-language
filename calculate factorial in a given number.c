#include<stdio.h>
main()
{
int i=0;
int n;
int b=1;
int c;
int d=0;
printf("enter a factorial \n");
scanf("%d",&n);
do
{
c=n-i;
b=b*c;
d=b+b;
i++;
}while (i<n);
printf("%d\n",d-b);

}
