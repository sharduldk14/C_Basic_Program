#include <stdio.h>

int main()
{
    char c;
    int i;
    printf("******ASCII Value Table******\n");
    printf("For Capital Letter\n")
    printf("Character\tASCII Value \n");
    for(i=65;i<91;i++)
    {
        printf("%c \t    %d \n",i,i);
    }
    

    return 0;
}
