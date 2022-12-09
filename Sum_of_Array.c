#include<stdio.h>
int main()
{
    int N;
    int a[N],i,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
   sum=sum+a[i];
    }
    printf("%d",sum);
}