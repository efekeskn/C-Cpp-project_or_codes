#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int kbasamaklı(int a)
{
    int b;
    while(a>0)
    {
        a/=10;
        b++;
    }
    return b;
    
}

int  basamaklarvekaresi(int a,int b)
{
    int d[b],c=b;
   while(a>0)
   {
       d[b-1]=a%10;
       b--;
       a/=10;
      
   }
   for(;c>0;c--)
   {
       b+=d[c-1]*d[c-1];
   }
   return b;
}



int main()
{
    int a,b,c,k,l;
    
    
    printf("take a number:");
    scanf("%d",&a);
    while(a!=89 && a!=1)
    {
        b=kbasamaklı(a);
        c=basamaklarvekaresi(a,b);
        printf("%d.  ",c);
        
        a=c;
        
    }
     printf("\n%d",a);

    
    
    
    
    
    return 0;
}
