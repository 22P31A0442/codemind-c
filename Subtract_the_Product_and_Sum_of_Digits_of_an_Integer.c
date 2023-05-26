#include<stdio.h>
int main()
{
    int n,i,d,s=0,f=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        f=f*d;
        n=n/10;
    }
    res=f-s;
    printf("%d",res);
}