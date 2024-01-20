#include<stdio.h>
main()
{
int x;
printf("enter a days number of a week \n");
scanf("%d",&x);
switch(x)
{
case 1:
printf("Monday quotes is \n \"your monday thoughts set the tone for your whole week.\n see yourself getting stronger,and living a fulfilling, happier and healthier life.\" ");
break;
case 2:
printf("Tuesday quotes is \n \"today is just another day unless you decide to make it extraordinary.So set your goals,Do your best to make today awesome and to make yourself proud\" ");
break;
case 3:
printf("Wednesday quotes is \n \"Be happy,Smile, Be fearless, Most importantly to be you. You are unique and special... No one can replace you.\" ");
break;
case 4:
printf("Thrusday quotes is \n \"Thrusday is the bridge between the hardwork of the week and the sweet reward of the weekend\" ");
break;
case 5:
printf("Friday quotes is \n \"Make a friday a day to celebrate work well done that you can be proud of knowing that you just did't put in time to the next paycheck\" ");
break;
case 6:
printf("Saturday quotes is \n \"Let positivity be your guide as you journey through this beautiful day\" ");
break;
case 7:
printf("Sunday quotes is \n \"Sunday is a time when you sit back and reflect on all the blessings that you have recevied smile at all the good things that you are enjoying\" ");
break;
default:
printf("invalid day no of a week");
}

}
