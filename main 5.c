#include <stdio.h>
#include <stdlib.h>

void change (char *ptr);



int main ()
{
  char *ptr = { "yazilim" };
  do
	{
	  printf ("%s", ptr);
     change (ptr);
	}
  while (*(ptr) != 'y');

  return 0;

}

void change (char *ptr)
{
  int size = sizeof (*ptr) - 1;
  char gecici = *ptr;
  for (int i = 0; i < size; i++)
	{
	  *(ptr + i) = *(ptr + i + 1);

	}
  *(ptr + size) = gecici;

}
