#include<stdio.h>
int main()
{
    int n,d,s=0,f=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        f=f*d;
        n=n/10;
    }
    if(s==f)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}