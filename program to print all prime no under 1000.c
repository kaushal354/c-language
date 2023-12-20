#include<stdio.h>
main()
{
int i;
int x;
int b=0;
int j;
printf("enter a number \n");
scanf("%d",&x);
for (i=1 ; i<=x ; i++ )
{
for (j=1 ; j<=i ; j++ )
{
    if( i%j == 0)
    {
      b=b+1;
    }

}
if (b>2)
{
//happy birthday
}
else if (b==1)
{
//happy birthday
}
else
{
printf("%d\n",i);
}
b=0;
}
}
