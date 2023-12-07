#include<stdio.h>
main()
{
    int i=1;
    int x;
    scanf("%d",&x);
    x=x*2;
    while(i<=x)
    {
        if (i%2==0)
        {
            printf("%d\n",i);

        }
        i++;

    }

}
