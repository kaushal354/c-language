#include<stdio.h>
main()
{
int x,y,z;
printf("enter a 1st number \n");
scanf("%d",&x);
printf("enter a 2nd number \n");
scanf("%d",&y);
printf("enter a 3rd number \n");
scanf("%d",&z);
if(x<y && y<z)
{
printf("here z will be greater than x and y ");
}
else if(x<z && y>z)
{
printf("here y will be greater than z and x");
}
else
{
printf("here x will be greater than y and z");
}
getch();
}
