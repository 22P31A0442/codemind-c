#include<stdio.h>
int main()
{
    int n,k,m,q,r;
    scanf("%d%d%d",&n,&k,&m);
    q=n/(k*m);
    r=n%(k*m);
    if(r==0)
    {
        printf("%d",q);
    }
    else
    {
        printf("%d",(q+1));
    }
}