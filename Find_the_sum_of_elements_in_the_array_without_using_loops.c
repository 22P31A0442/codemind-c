#include <stdio.h>    
int main()    
{    
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);}
    int sum = 0;    
    int length = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < length; i++) {     
       sum = sum + arr[i];    
    }      
    printf("%d", sum);    
    return 0;    
}    