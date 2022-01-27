#include <stdio.h>
#include <string.h>

int main()
{
    char name[10]="shardul",a[10];
    int i,len;
    len=strlen(name);
    for(i=0;i<len+1;i++)
    {
        a[i]=name[len-i];
        printf("%c",a[i]);

    }
    
    return 0;
}
