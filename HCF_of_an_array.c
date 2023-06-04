#include<stdio.h>

int main()
{
    int n,i,gcd;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    gcd=x[0];
    int j=1;
    while(j<n)
    {
       if(x[j]%gcd==0)
       {
           j++;
       }
       else
       {
           gcd=x[j]%gcd;
           i++;
       }
    }
    printf("%d ",gcd);
    return 0;
}