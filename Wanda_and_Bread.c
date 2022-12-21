#include<stdio.h>
int main()
{
    float n,m,k,s;
    scanf("%f%f%f",&n,&m,&k);
    s=n/k;
    if(s<=m)
    {
        printf("YES");
    }
    else if(s>m)
    {
        printf("NO");
    }
}