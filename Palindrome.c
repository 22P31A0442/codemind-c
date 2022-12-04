#include<stdio.h>
int main()
{
    int n,i,r,q,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}