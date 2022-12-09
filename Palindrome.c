#include<stdio.h>
int main()
{
    int n,i,q,r,s=0;
    scanf("%d",&n);
    q=n;
    for(i=1;i<=q;i++)
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}