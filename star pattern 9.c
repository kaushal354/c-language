#include<stdio.h>
main()
{
int i,j,c=1;
for(i=1;i<=6;i++)
{
for(j=1;j<=10;j++)
{
if(j>=7-i && j<=5+i )
{
if(c%2==0)
{
    printf("*");
}
else
{
    printf(" ");
}
c++;
}
else
{
printf(" ");
}
}
printf("\n");
c=1;
}

}
