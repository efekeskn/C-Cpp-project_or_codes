// ebob ekok
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void
ekok (int a, int b)
{
  int c, okek = 1, d;
  d = (a > b ? a : b);
  for (c = 2; c <= d; c++)
	{
	  if (a % c == 0 && b % c == 0)
		{
		  okek *= c;
		  a /= c;
		  b /= c;
		  c--;
		}
	  else if (a % c == 0)
		{
		  okek *= c;
		  a /= c;
		  c--;
		}
	  else if (b % c == 0)
		{
		  okek *= c;
		  b /= c;
		  c--;
		}

	}
  printf ("ekok--->%d\n", okek);
}

void
ebob (int a, int b)
{
  int c, obeb=1, d;
  d = a < b ? a : b;
  for (c=2;c<=d;c++)
  {
      if(a%c==0 && b%c==0)
      {
        obeb*=c;  
        a/=c;
        b/=c;
        c--;
      }
  }
  printf("ebob--->%d",obeb);
    
}
	int main ()
  {
	int a, b;

	printf ("lC<tfen 2 sayi giriniz:");
	scanf ("%d%d", &a, &b);
	ekok (a, b);
	ebob (a, b);


	return 0;
  }
