#include <stdio.h>

int main()
{
    char c;
    int i;
    printf("******ASCII Value Table******\n");
    printf("For Small case Letter\n");
    printf("Character\tASCII Value \n");
    for(i=97;i<123;i++)
    {
        printf("%c \t    %d \n",i,i);
    }
    

    return 0;
}
