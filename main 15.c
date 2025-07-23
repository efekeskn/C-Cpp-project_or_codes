// fibonacci ve tribonacci

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int
main ()
{
  int a = 0, b = 1, c, i;



  printf ("fibonacci\n1. -->0 \n2. -->1\n");
  for (i = 3; i <= 20; i++)
	{
	  c = a + b;
	  a = b;
	  b = c;
	  printf ("%d. -->%d\n", i, c);

	}
  printf ("\ntribonacci\n1. -->0 \n2. -->1\n3. -->1\n");
  a = 0;
  b = 1;
  c = 1;
  int d;
  for (i = 4; i <= 20; i++)
	{
	  d = a + b + c;
	  a = b;
	  b = c;
	  c = d;
	  printf ("%d. -->%d\n", i, d);
	}

  return 0;
}
