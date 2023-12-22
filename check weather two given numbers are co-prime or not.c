#include<stdio.h>
main()
{
int i;
int j;
int n;
int c;
int a;
int b;
int d=0;
printf("enter a first number \n");
scanf("%d",&n);
printf("enter a second number \n");
scanf("%d",&c);
for (i=1 ,j=1; i<=n ,j<=c ; i++ ,j++)
{
    if(n%i==0 && c%j==0)
    {
        a=i;
        b=i;
        if(a==b)
        {
        d=d+1;
        }
    }
}

  if(d==1)
  {
      printf("it is a co-prime");
  }
  else
    {
    printf("it is not a co-prime");
  }
}




