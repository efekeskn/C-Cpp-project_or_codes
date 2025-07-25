#include <stdio.h>
#include <stdlib.h>

int kactaneteksayi(int *ptrmatris,int i);

int main()
{
    int sayi;
    
    printf("kac sayi gireceksiniz:");
    scanf("%d",&sayi);
    
    int matris[sayi];
    
    printf("\n\n");
    
    for(int i=0;i<sayi;i++)
    {
        printf("lutfen %d. sayiyi giriniz:",i+1);
        scanf("%d",&matris[i]);
    }
    
    printf("su kadar sayi tek sayidir:%d",kactaneteksayi(matris,sayi-1));
    
    return 0;
    
}

int kactaneteksayi(int *ptrmatris,int i)
{
    int a;
    
    for(;i>=0;i--)
    {
        if(ptrmatris[i]%2 != 0)
        a++;
    }
    return a;
}


