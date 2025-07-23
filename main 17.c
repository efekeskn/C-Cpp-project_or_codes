#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int
main ()
{
  char metin[100], karakter;
  int a, b;
  printf ("metin giriniz:");
  fgets (metin, 100, stdin);

  for (karakter = 'a'; karakter <= 'z'; karakter++)
	{
	  for (a = 0; a < 100; a++)
		{
		  if (karakter == metin[a])
			b++;
		}
	  printf ("%c den %d kadar var\n", karakter, b);
	  b = 0;
	}


  return 0;
}
