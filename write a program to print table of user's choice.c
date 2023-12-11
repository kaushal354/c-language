#include<stdio.h>
main()
{
int n;
int d;
int c;
int i=0;
printf("choose a fruits \n");
printf("1.apple \t 2.banana \t 3.mango\n");
scanf("%d",&n);
printf("chose a transport \n");
printf("1.bus \t 2.truck \t 3.bike\n");
scanf("%d",&d);
do
{
    if(n==1)
    {
        printf("apple\n");
    }
    else if(n==2)
    {
    printf("banana\n");
    }
    else
    {
      printf("mango\n");
    }
    if (d==1)
    {
        printf("bus");
    }
    else if (d==2)
    {
        printf("truck");
    }
   else
    {
       printf("bike");
    }
    i++;
}while(i>1);
}
