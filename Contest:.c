#include<stdio.h>
int main()
{
    int a,b,x,s;
    scanf("%d%d%d",&x,&a,&b);
    s=a*1+b*2;
    if(s>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}