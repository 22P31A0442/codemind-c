#include<stdio.h>
int main()
{
 int n,s=0,f=1,d;
 scanf("%d",&n);
 while(n!=0)
 {
     d=n%10;
     s=s+d;
     f=f*d;
     n=n/10;
 }
 printf("%d",f-s);
}