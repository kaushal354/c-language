#include<stdio.h>
float area(float);
int main()
{
float r,c;
printf("enter a radius\n");
scanf("%f",&r);
c=area(r);
printf("area of a circle is %.2f",c);
return 0;
}
float area(float r)
{
float pi=3.14,d;
d=pi*r*r;
return d;
}
