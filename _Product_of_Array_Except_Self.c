#include<stdio.h>
int main()
{
    int n,i,f=1;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        f=f*x[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",f/x[i]);
    }
    
}