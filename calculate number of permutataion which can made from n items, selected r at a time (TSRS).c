#include<stdio.h>
int per(int,int);
int main()
{
    int n,p,r;
    printf("enter a n items\n");
    scanf("%d",&n);
    printf("enter a r item\n");
    scanf("%d",&r);
    p=per(n,r);
    printf("the number of permutation is %d",p);
    return 0;
}
int per(int n,int r)
{
    int i,v,c=1,a,d=1,k;
    for(i=n;1<i;i--)
    {
        v=i;
        c=v*c;
    }
    a=n-r;
    for(i=a;1<i;i--)
    {
        v=i;
        d=v*d;
    }
    k=c/d;
    return k;
}
