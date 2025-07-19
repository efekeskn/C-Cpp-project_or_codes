#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
yazdir (float *ptr, int a)
{
  printf ("\n\n|");
  for (int i = 0; i < a * (a+1); i++)
	{

	  printf ("%.0f    ", ptr[i]);

	  if ((i + 1) % (a+1)  == 0)
	  {
	       i++;
	      printf (" =  %0.f |\n|",ptr[i]);
	     
	      
	  }	


	}
}

void
sifirla (float *ptr, int a)
{

}


int
main ()
{
  srand (time (NULL));

  int a;

  printf ("Lutfen bir kare matris icin bir sayi giriniz: ");
  scanf ("%d", &a);

  float matris[a][a+1];

  for (int num1 = 0; num1 < a; num1++)
	{
	  for (int num2 = 0; num2 < a; num2++)
		{
		  matris[num1][num2] = 1.0 * (rand () % 9 + 1);
		  printf (" %.0f   ", matris[num1][num2]);
		}
      matris[num1][a + 1]=1.0*(rand()%9+1);
	  printf ("=    %.0f\n",matris[num1][a+1]);
	}


  yazdir (&matris[0][0], a);

  return 0;
}
