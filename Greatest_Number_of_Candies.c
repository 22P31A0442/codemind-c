#include<stdio.h>
int main()
{
    int n,i,m,max=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
        max=x[i];
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(x[i]+m>=max)
        printf("True ");
        else
        printf("False ");
    }
}