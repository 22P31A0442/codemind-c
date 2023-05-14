#include<stdio.h>
int main()
{
     int h,s,sp, grade  = 0;
        scanf("%d%d%d",&h,&s,&sp);
        if(h>50 && s>60 && sp>100)
        {
        grade = 10;
        }
        else if(h>50 && s>60)
        {
        grade = 9;
        }
        else if(s>60 && sp>100)
        {
        grade = 8;
        }
        else if(h>50 && sp>100)
        {
        grade = 7;
        }
        else if(h>50 || s>60 || sp>100)
        {
        grade = 6;
        }
        else 
        {
            grade = 5;
        }
       printf("%d",grade);
        
}