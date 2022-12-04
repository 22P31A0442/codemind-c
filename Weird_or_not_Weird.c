#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1 && n/2>=6 && n/2<=20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}