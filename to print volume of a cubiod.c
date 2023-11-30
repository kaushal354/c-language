#include <stdio.h>
main()
{
float l,w,h,volume;
printf("enter a length of a cubiod \n");
scanf("%f",&l);
printf("enter a width of a cubiod \n");
scanf("%f",&w);
printf("enter a height of a cubiod \n");
scanf("%f",&h);
volume=l*w*h;
printf("the volume of a cubiod is %.2f",volume);
getch();
}
