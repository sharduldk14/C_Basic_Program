#include <stdio.h>

int main()
{
    char letter;
    printf("*****Program to identify Vowel*****\n");
    printf("Enter a Character:");
    scanf("%c",&letter);
    if(letter==97 || letter==65)
    {
        printf("%c is a Vovel.",letter);
    }
    else if(letter==101 || letter==69)
    {
        printf("%c is a Vovel.",letter);
    }
    else if(letter==105 || letter==73)
    {
        printf("%c is a Vovel.",letter);
    }
    else if(letter==111 || letter==79)
    {
        printf("%c is a Vovel.",letter);
    }
    else if(letter==117 || letter==85)
    {
        printf("%c is a Vovel.",letter);
    }
    else
    {
        printf("%c is not a Vovel",letter);
    }
    

    return 0;
}
