#include<stdio.h>
int main()
{
  int n,i,s=0,avg,count=0;
  scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&x[i]);
      s=s+x[i];
  }
  for(i=0;i<n;i++)
  {
      avg=s/n;
      if(x[i]<=avg)
      count++;
  }
  printf("%d",count);
}