#include<stdio.h>
main()
{
int i;
int n;
int a=0;
int b=1;
int c;
printf("enter a n number \n");
scanf("%d",&n);
for(i=1 ; i<n ;  )
{
if(a<=b)
{
c=a+b;
a=c;
i=c;
}
else
{
c=a+b;
b=c;
i=c;
}
}
if(i==n)
{
    printf("yes it is fibonacci series \n");
}
else{
    printf("no it is not a fibonacci series");
}
}
