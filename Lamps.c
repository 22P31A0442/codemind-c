#include<stdio.h>
int main()
{
    int n,k,x,y,a,b;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    a =k*x;
    b = n-k;
    if(b*x>b*y)
    {
        printf("%d",a+b*y);
    }
    else if(b*y>b*x)
    {
        printf("%d",a+b*x);
    }
    else
    {
        printf("%d",a);
    }
}