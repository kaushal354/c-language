#include<stdio.h>
main()
{
int x;
printf("enter a month number :\n");
scanf("%d",&x);
switch (x)
{
case 1:
printf("the days in january = 31 ");
break;
case 2:
printf("the days in february is = 29(in case of leap year) & 28(in the case of normal year)");
break;
case 3:
printf("the days in march = 31");
break;
case 4:
printf("the days in april = 30");
break;
case 5:
printf("the days in may = 31");
break;
case 6:
printf("the days in june = 30");
break;
case 7:
printf("the days in july = 31");
break;
case 8:
printf("the days in august = 30");
break;
case 9:
printf("the days in september = 30");
break;
case 10:
printf("the days in october = 31");
break;
case 11:
printf("the days in november = 30");
break;
case 12:
printf("the days in december = 31");
break;
default:
printf("invalid month no");
}
}
