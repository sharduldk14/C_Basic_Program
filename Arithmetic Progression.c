#include<stdio.h>  
  
int main()  
{  
    float a,d,t,sum;
    int i;
    printf("*****Mathematics Series*****\n");
    printf("Enter First Number -");
    scanf("%f",&a);
    t=a;
    sum=a;
    printf("Enter the difference -");
    scanf("%f",&d);
    printf("The Arthmetic Series is - %.2f ",a);
    for(i=1;i<7;i++)
    {
        t=t+d;
        printf("%.2f ",t);
        sum=sum+t;
    }
    printf("\nThe sum of all numbers in the series is %f.",sum);
    return 0;
}  
