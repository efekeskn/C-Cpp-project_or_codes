#include <stdio.h>
#include <stdlib.h>

void yazdir (int d[][9])
{
  int a, b;
  printf ("     ");
  for (a = 0; a < 9; a++)
	{
	  printf ("%d  ", a);
	  if (a % 3 == 2)
		printf (" ");
	}
  printf ("\n\n");
  for (a = 0; a < 9; a++)
	{
	  if (a % 3 == 0)
		printf ("\n");
	  printf ("%d   ", a);
	  for (b = 0; b < 9; b++)
		{
		  if (b % 3 == 0)
			printf (" ");
		  printf ("%d  ", d[a][b]);
		}
	  printf ("\n");
	}
}

int
islem (int d[][9])
{
  int a, b, c, e, f;
  for (a = 0; a < 9; a++)
	{
	  for (b = 0; b < 9; b++)
		{
		  for (c = 0; c < 9; c++)
			{
			  if (d[a][b] == d[a][c] || d[b][a] == d[c][a])
				return 0;
			}
		}
	}
  for (a = 0; a < 9; a++)
	{
	  if (a % 3 == 0)
		{
		  for (b = 0; b < 9; b++)
			{
			  if (b % 3 == 0)
				{
				  for (c = a; c < a + 3; a++)
					{
					  for (e = b; e < b + 3; b++)
						{
						  for (f = b; f <= b + 3; f++)
							{
							  if (d[c][e] == d[c][f])
								return 0;
							}
						}
					}
				}
			}
		}
	}
  return 1;
}





int  main ()
{
  int a, b, c, matris[9][9] = { 0 };
  do
	{
	  yazdir (matris);
	  
	  printf ("\nlutfen 2 basmak seciniz(0-8):");
	  scanf ("%d%d", &a, &b);
	  
	  if (a < 0 || a > 8 || b < 0 || b > 8)
		continue;
		
	  printf ("lutfen d[%d][%d] kaca esit olacagini yaziniz:", a, b);
	  scanf ("%d", &matris[a][b]);
	  
	  printf("\n");
	  
	  if (matris[a][b] > 9 || matris[a][b] < 1)
		matris[a][b] = 0;

	}
  while (islem (matris) == 0);

  return 0;
}
