#include<stdio.h>
int main()
{
 int n,i,f=1,j;
 scanf("%d",&n);
 int a;
 for(i=0;i<n;i++)
 {
     scanf("%d",&a);
     for(j=1;j<=a;j++)
     {
         f=f*j;
     }
     printf("%d
",f);
     f=1;
 }
     
}