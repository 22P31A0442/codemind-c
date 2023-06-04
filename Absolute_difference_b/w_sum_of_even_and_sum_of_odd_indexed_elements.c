#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,s=0,f=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(i%2==0)
        s=s+x[i];
        else
        f=f+x[i];
    }
    printf("%d",abs(f-s));
}