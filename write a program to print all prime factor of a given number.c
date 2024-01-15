#include<stdio.h>
main()
{
int a,i,j,b=0;
printf("enter a number \n");
scanf("%d",&a);
for(i=2;a!=1;)
{
for(j=1;j<=i;j++)
{

 if(i%j==0)
 {
   b=b+1;

 }
}
   if(b==2)
   {

       if(a%i==0)
       {
           printf("%d\n",i);
           a=a/i;
       }
       else
       {
           i++;

       }
    }
    if(b!=2)
    {
        i++;
    }

   b=0;
}

}
