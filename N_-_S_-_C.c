#include<stdio.h>
int main()
{
    int i,a,b,n,m;
    scanf("%d%d",&a,&b);
    for(i=(a+1);i<b;i++)
    {
        n=i*i;
        m=i*i*i;
        printf("%d %d %d
",i,n,m);
    }
}