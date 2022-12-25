#include<stdio.h>
int main()
{
    int n,m,s=0,r,q;
    scanf("%d",&n);
    m=n*n;
    q=m;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
        
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}