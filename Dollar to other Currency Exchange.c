#include <stdio.h>

int main()
{
    int i, key;
    float dollar;
    printf("******Dollar to other Currency Exchange******\n");
    printf("1.1 Dollar=74.41 Rupees\n");
    printf("2.1 Dollar=0.85 Euro\n");
    printf("3.1 Dollar=3.67 UAE Dirham\n");
    printf("4.1 Dollar=0.72 Pound\n");
    printf("5.1 Dollar=8.61 Turkish lira\n ");
    printf("Enter You Choice for Exchange :");
    scanf("%d",&key);
    switch(key)
    {
        case 1: printf("You have choose Dollar to Rupees\n");
                printf("Enter Dollar to Exchange : ");
                scanf("%f",&dollar);
                printf("\n%f Dollar = %f Rupees",dollar,74.11*dollar);
                break;
                
        case 2: printf("You have choose Dollar to Euro\n");
                printf("Enter Dollar to Exchange : ");
                scanf("%f",&dollar);
                printf("\n%f Dollar = %f Euro",dollar,0.85*dollar);
                break;
                
        case 3: printf("You have choose Dollar to UAE Dirham\n");
                printf("Enter Dollar to Exchange : ");
                scanf("%f",&dollar);
                printf("\n%f Dollar = %f UAE Dirham",dollar,3.67*dollar);
                break;
                
        case 4: printf("You have choose Dollar to Pound\n");
                printf("Enter Dollar to Exchange : ");
                scanf("%f",&dollar);
                printf("\n%f Dollar = %f Pound",dollar,0.72*dollar);
                break;
                
        case 5: printf("You have choose Dollar to Turkish lira\n");
                printf("Enter Dollar to Exchange : ");
                scanf("%f",&dollar);
                printf("\n%f Dollar = %f Turkish lira",dollar,8.61*dollar);
                break;
                
        default : printf("Invalid Choice.Choose between 1 to 5.");
    }

    return 0;
}
