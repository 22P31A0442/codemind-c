#include<stdio.h>
int main()
{
    int x,y,i,gcd=0,lcm;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        {
            gcd=i;
        }
    }
    lcm=x*y/gcd;
    printf("%d",lcm);
}