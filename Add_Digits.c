#include<stdio.h>
int main()
{
    int n,d,s=0,dd,ss=0,ddd,sss=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    if(s<10)
    printf("%d",s);
    else
    {
        while(s!=0)
      {
        dd=s%10;
        ss=ss+dd;
        s=s/10;
      }
      if(ss<10)
      printf("%d",ss);
      else
      {
          while(ss!=0)
          {
              ddd=ss%10;
              sss=sss+ddd;
              ss=ss/10;
          }
          printf("%d",sss);
      }
    }
}