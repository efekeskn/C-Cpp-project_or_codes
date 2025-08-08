//Sayı Tahmin Oyunu
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main()
{
    srand(time(NULL));
    
    int a,b,c=0;
    
    a=rand()%99+1;
    while(true)
    {
        printf("lütfen sayıyı tahmin ediniz:");
        scanf("%d",&b);
        c++;
        if(a==b)
        {
          printf("tebrikler tahmininiz doğru - deneme sayısı=  %d",c);
          return 0;
        }
        else if(a-b<5 && b-a<5)
        printf("çok yaklaştınız");
        else if(a-b<15 && b-a<15)
        printf("yakın");
        else
        printf("uzak");
        
        printf("\n");
    }
    
    
}