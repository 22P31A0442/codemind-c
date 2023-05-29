#include<stdio.h>
int main()
{
    int u,s,c;
    scanf("%d",&u);
    if(u<=199)
    {
        c=u*1.20;
        if(c<400)
        s=100;
        else
        s=(c*15)/100;
    }
    else if(u>200&&u<400)
    {
        c=u*1.50;
        if(c<400)
        s=100;
        else
        s=(c*15)/100;
    }
    else if(u>400&&u<600)
    {
        c=u*1.80;
         s=(c*15)/100;
    }
    else
    {
        c=u*2;
         s=(c*15)/100;
    }
    float charge=s+c;
    printf("%0.2f",charge);
}