#include<stdio.h>
float circum(float);
int main()
{
float d,r;
printf("enter a radius\n");
scanf("%f",&r);
d=circum(r);
printf("circumference of a circle is %.2f",d);
return 0;
}
float circum(float r)
{
int c,pi=3.14;
c=2*pi*r;
return c;
}
