#include <stdio.h>

int main()
{
    int num,i,fact=1;
    printf("******Program For a Factorial of a Number******\n");
    printf("Enter a Number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a %d is %d",num,fact);
    return 0;
}
