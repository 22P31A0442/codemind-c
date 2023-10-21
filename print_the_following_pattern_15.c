#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            int x = 64+i;
            char c = x;
            printf("%c ",c);
        }
        printf("
");
    }
}