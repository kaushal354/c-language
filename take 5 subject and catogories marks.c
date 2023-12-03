#include<stdio.h>
main()
{
int eng,hin,math,comp,dsa,totmarks;
printf("enter a marks of english\n");
scanf("%d",&eng);
printf("enter a marks of hindi \n");
scanf("%d",&hin);
printf("enter a marks of computer science \n");
scanf("%d",&comp);
printf("enter a marks of math \n");
scanf("%d",&math);
printf("enter a marks of dsa\n");
scanf("%d",&dsa);
totmarks=(eng+hin+math+comp+dsa)/5;
printf("the total marks %% will be %d \n",totmarks);
if(totmarks>=60)
{
printf("the student will be pass\n");
printf("the division is 1st division");
}
else if(totmarks>=40 && totmarks<=59)
{
printf("the student will be pass\n");
printf("the division is 2nd division");
}
else if(totmarks>=33 && totmarks<=39)
{
printf("the student will be pass\n");
printf("the division is 3rd division ");
}
else
{
printf("the student will be fail");
}
getch();
}
