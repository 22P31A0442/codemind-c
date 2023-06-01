#include<stdio.h>
int main()
{
    int n,s=0,f=0,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        if(d%2==0)
        s++;
        else
        f++;
    }
    if(s==0&&f>0)
    printf("Odd");
    else if(s>0&&f==0)
    printf("Even");
    else
    printf("Mixed");
}