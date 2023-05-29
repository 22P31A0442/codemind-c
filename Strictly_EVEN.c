#include<stdio.h>
int main()
{
  int n,i,s;
  scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&x[i]);
      if(i%2==0)
      {
          if(x[i]%2!=0)
          s=1;
      }
  }
  if(s==1)
  printf("False");
  else
  printf("True");
}