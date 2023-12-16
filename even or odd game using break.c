#include<stdio.h>
main()
{
int x,i;
for(i=1 ; i<=3 ; i++)
{
printf("enter a number \n");
scanf("%d",&x);
if(x%2==0)
   break;

}
if(i==4)
 printf("game over");
else
 printf("you win");

getch();
}
