#include<stdio.h>
int main()
{
    int n,q,s=0,r,m;
    scanf("%d",&n);
    m=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    int o,f=0,d,g;
    o=s*s;
    g=o;
    while(g!=0)
    {
        d=g%10;
        g=g/10;
        f=f*10+d;
    }
    if(m==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}