#include<stdio.h>
int main()
{
    char ch;
        scanf("%c",&ch);
        if(ch=='A' ||ch=='a' || ch=='e' || ch=='E'||ch=='I' || ch=='i' || ch=='O' || ch=='o' ||ch=='U' || ch=='u')
         {
             printf("Vowel");
         }
        else
        {
          printf("Consonant");
        }
}