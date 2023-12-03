#include<stdio.h>
main()
{
int x;
printf("enter a year \n");
scanf("%d",&x);
if(x%4==0)
{
printf("the year is leap year");

}
else
{
printf("the year is not a leap year");

}
getch();
}
