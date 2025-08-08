//cümleyi tersten yazdırma
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char cumle[100];
    int a;
    printf("lütfen bir cümle giriniz:");
    fgets(cumle,100,stdin);
    a=strlen(cumle);
    
    for(a;a>=0;a--)
    {
        printf("%c",cumle[a]);
    }
    
    
    return 0;
}