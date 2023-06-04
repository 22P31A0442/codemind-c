#include<stdio.h>
int main()
{
    int n,i,s=0,f=1,d,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
            s=s+f;
       f=1;
        temp=temp/10;
    }
    if(s==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
}