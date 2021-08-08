/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[20],i,n,smallest;
    printf("*****Program to find Smallest Number*****\n");
    printf("Enter how many numbers:- ");
    scanf("%d",&n); 
    printf("Enter %d number: ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The entered numbers : ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    smallest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=smallest)
        {
            smallest=a[i];
        }
         
    }
    printf("\nThe smallest nuber is %d",smallest);
    return 0;
}
