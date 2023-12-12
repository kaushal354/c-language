#include<stdio.h>
main()
{
int a=0;
int b=1;
int c;
int d;
int i=1;
printf("enter a n term which you have to print \n");
scanf("%d",&d);
do
{
if(a<=b)
{
   c=a+b;
   a=c;
   printf("%d\n",c);
}
else
{
    c=a+b;
    b=c;
    printf("%d\n",c);
}
i++;
}while(i<=d);


}
