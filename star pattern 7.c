#include<stdio.h>
main()
{
int i,j;
char c=65;
for(i=1;i<=4;i++)
{
for(j=1;j<=7;j++)
{
if(j<=5-i || j>=3+i)
{
printf("%c",c);
j<4?c++:c--;
}
else
{
printf(" ");
if(j==4)
{
    c--;
}
}
}
printf("\n");
c=65;
}
}
