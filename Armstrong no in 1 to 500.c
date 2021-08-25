#include<stdio.h>  
  
int main()  
{  
    int num, count = 1, temp, arm;  
  
    while(count <= 500)  
    {  
        num=count;  
        arm=0;  
  
        while(num)  
        {  
            temp=num % 10;  
            arm=arm+(temp*temp*temp);  
            num=num / 10;  
        }  
  
        if(count==arm)  
        {  
            printf("%d is a Armstrong number\n",count);  
        }  
  
        count++;  
    }  
  
     return 0;  
}  
