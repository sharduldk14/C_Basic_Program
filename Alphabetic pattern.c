#include <stdio.h>
int main()
{
    char c;
    int i,j;
    printf("******Alaphabetic Design*******\n");
    for(i=1;i<8;i++)
    {
        for(c=65;c<65+i;c++)
        {
            printf(" %c ",c);
        }
        printf("\n");
    }
    return 0;
}
