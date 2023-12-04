#include<stdio.h>
main()
{
int x;
printf("enter a number :");
scanf("%d",&x);
if ((x&1) == 0)
{
printf("then it is even");

}
else

{
printf("then it is odd");

}
getch();
}
