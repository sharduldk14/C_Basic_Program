//This is a Program to Calculatr Result of a Stodent.
#include<stdio.h>
int main ()
{
  int sub, s[10], j = 0;
  int i, f;
  float percent, total;
  printf ("*****Program to find Results*****\n");
  printf ("Enter your Marks out of 1OO\n");
  printf ("Enter how many Subjects:");
  scanf ("%d", &sub);
  for (i = 0; i < sub; i++)
    {
      printf ("Enter Subject %d marks:", i + 1);
      scanf ("%d", &s[i]);
    }

  for (i = 0; i < sub; i++)
    {
      total += s[i];
    }
  percent = total / sub;
  for (i = 0; i < sub; i++)
    {
      if (s[i] < 35)
	{
	  j++;
	}
    }


  if (j > 0)
    {
      printf ("You have %f percentage , You have *Failed* the Exam", percent);
    }
  else
    {
      printf ("You are Pass with %f Percentage.", percent);
    }
  return 0;
}
