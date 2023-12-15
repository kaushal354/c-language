#include<stdio.h>
main()
{
int a;
int b;
int i;
printf("choose a fruit \n");
printf("1.apple \t 2.banana \t 3.mango \n");
scanf("%d",&a);
printf("choose a transport \n");
printf("1.bus \t 2.truck \t 3.bike \n");
scanf("%d",&b);
for(i=0 ; i<1 ; i++)
{
if(a==1)
{
printf("you choose fruit = apple\n");
}
else if(a==2)
{
printf("you choose fruit = banana\n");
}
else if(a==3)
{
printf("you choose fruit = mango\n");
}
else
{
printf("invalid option choosen in fruit \n");
}
if(b==1)
{
printf("you choose transport = bus\n");
}
else if(b==2)
{
printf("you choose transport = truck\n");
}
else if(b==3)
{
printf("you choose transport = bike\n");
}
else
{
printf("invalid option choosen in transport \n");
}
}
}
