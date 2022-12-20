#include<stdio.h>
int main()
{
    int u;
    float p,b,s,t;
    scanf("%d",&u);
    if(u<=199)
    {
        p=1.20;
        b=p*u;
        s=0;
        t=s+b;
    }
    if(u>=200 && u<400)
    {
        p=1.40;
        b=p*u;
        s=0;
        t=s+b; 
    }
    if(u>=400 && u<600)
    {
         p=1.60;
        b=p*u;
        s=b*15/100;
        t=s+b;
    }
    if(u>=600 && u<800)
    {
         p=1.80;
        b=p*u;
        s=b*15/100;
        t=s+b;
    }
    if(u>=800)
    {
         p=2.00;
        b=u*p;
        s=b*15/100;
        t=s+b;
    }
    {
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %0.2f
",p);
        printf("Bill: %0.2f
",b);
        printf("Surcharge: %0.2f
",s);
        printf("Total Amount: %0.2f",t);
    }
}