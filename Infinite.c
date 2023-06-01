#include<stdio.h>
int main()
{
    int n;
    do
    {
     scanf("%d",&n);
     if(n!=(-1))
     printf("%d
",n*n);
     else
     break;
    }while(n!=(-1));
}