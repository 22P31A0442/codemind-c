#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    if(n==0||n==1)
    printf("True");
    else
    {
        c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
    }
}