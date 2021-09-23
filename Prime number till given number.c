#include <stdio.h>
int mmain ()
{
  int num, i, count = 0, j;
  scanf ("%d", &num);
  for (i = 2; i < num; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  if (i % j == 0)
	    {
	      count = count + 1;
	    }
	}
      if (count < 3)
	{
	  printf ("%d ", i);

	}
      count = 0;

    }

  return 0 ;
}
