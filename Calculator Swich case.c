#include <stdio.h>

int main()
{
    int choice,a,b;
    printf("*****Switch Case Multioptional Program*****");
    printf("Calculator Program\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modular Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("This is a Addition operation.\n");
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                printf("%d + %d=%d",a,b,a+b);
                break;
                
        case 2: printf("This is a Subtraction operation.\n");
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                printf("%d - %d=%d",a,b,a-b);
                break;
                
        case 3: printf("This is a Multiplication operation.\n");
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                printf("%d * %d=%d",a,b,a*b);
                break;
                
        case 4: printf("This is a Division operation.\n");
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                printf("%d / %d=%d",a,b,a/b);
                break;
                
        case 5: printf("This is a Modular Division operation.\n");
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                printf("%d mod div %d=%d",a,b,a%b);
                break;
                
        default: printf("Invalid choice");
    }

    return 0;
}
