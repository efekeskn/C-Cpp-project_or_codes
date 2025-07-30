// su faturasi hesaplama
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
main ()
{
  int tuketilensu;
  float fatura;

  printf
	("lutfen kullanmis oldugunuz su miktarini giriniz (ton cinsinden): ");
  scanf ("%d", &tuketilensu);
  if (tuketilensu < 30)
	fatura = 2.30 * tuketilensu;
  else
	fatura = 2.30 * (30) + (tuketilensu - 30) * 3;
  printf ("bu ayki faturaniz =%.2f tl", fatura);



}
