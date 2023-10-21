#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int x =64+i;
            char c = x;
            printf("%c ",c);
        }
        printf("
");
    }
}