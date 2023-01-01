#include<stdio.h>
int main()
{
    int n,i,f=0,d,s=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    a=s*s;
    for(i=1;i<=n;i++)
    {
        f=f+(i*i);
    }
    d=a-f;
    printf("%d",d);
}