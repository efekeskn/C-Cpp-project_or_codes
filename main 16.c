#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yazdir(int a,char cumle[])
{
    printf("girdiginiz cumlenin tersten yazilmis sekli: ");
    
    for(;a>0;a--)
    {
        printf("%c",cumle[a-1]);
    }
}


void main()
{
    int a,b,c;
    char cumle[300];
    printf("lutfen bir cumle giriniz:");
    fgets(cumle,300,stdin);
    a= strlen(cumle);
    yazdir(a,cumle);
    
    
    
    
    
}