#include <stdio.h>
main()
{
float p,r,t,si;
printf("enter a principal amount (in rs)\n");
scanf("%f",&p);
printf("enter a rate of intrest (in %)\n");
scanf("%f",&r);
printf("enter a time period (in yrs) \n ");
scanf("%f",&t);
si=(p*r*t)/100;
printf("the simple intrest is %.2f",si);
getch();
}
