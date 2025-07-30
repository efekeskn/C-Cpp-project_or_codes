#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int main()
{
    int a,b,c;
    printf("\nlutfen x^2 nin baskatsayisini yaziniz:");
    scanf("%d",&a);
    
    printf("\nlutfen x in baskatsayisini yaziniz:");
    scanf("%d",&b);
    
    printf("\nlutfen sabit sayiyi yaziniz:");
    scanf("%d",&c);
    
    printf("\nDenklem = %d(x^2) + %d(x) + %d\n",a,b,c);
    float kok1,kok2;
    
    kok1=(b-pow((b*b-4*a*c),0.5))/(2*a)*1.0;
    kok2=(b+pow((b*b-4*a*c),0.5))/(2*a)*1.0;
     
    printf("kok1=%f         kok2=%f",kok1,kok2);
    
    
    
    
    return 0;
    
}