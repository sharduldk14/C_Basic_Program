#include <stdio.h>

int main()
{
    int num,i;
    printf("******Numbers to Roman Number******\n");
    printf("Enter number between 1 to 25 :");
    scanf("%d",&num);
    printf("\nThe Roman number of Entered number is :");
    if(num<3)
    {
        for(i=1;i<=i;i++)
        {
            printf("I");
        }
    }    
    else if (num==4)
    {
        printf("IV");
    }
    else if (num>4 && num<9)
    {
        printf("V");
        for(i=5;i<num;i++)
        {
            printf("I");
        }
    }
    else if (num==9)
    {
        printf("IX");
    }
    else if (num>9 && num<13)
    {
        printf("X");
        for(i=10;i<num;i++)
        {
            printf("I");
        }
    }
    else if(num==14)
    {
        printf("XIV");
    }
    else if(num>14 && num<19)
    {
        printf("XV");
        for(i=15;i<num;i++)
        {
            printf("I");
        }
    }
    else if(num==19)
    {
        printf("XIX");
    }
    else if(num>19 && num<24)
    {
        printf("XX");
        for(i=20;i<num;i++)
        {
            printf("I");
        }
    }
    else if(num==24)
    {
        printf("XXIV");
    }
    else if(num>24 && num<29)
    {
        printf("XXV");
        for(i=25;i<num;i++)
        {
            printf("I");
        }
    }
    
    return 0;
}  
