#include <stdio.h>
int main()
{
   int i,n;
   printf("****Program For Odd & Even*****\n");
   printf("Enter a number:-");
   scanf("%d",&n);
   if(n%2==0)
   {	
       printf("The entered number is Even");
   }
   else
   {
       printf("The entered number is Odd");
   }
   return 0;
}
