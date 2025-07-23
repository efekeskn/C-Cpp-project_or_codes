#include <stdio.h>
#include <stdlib.h>

void sirala(int kdizi[],int a)
{
    int b,c,buyuk;
    
    for(b=0;b<a;b++)
    {
        for(c=0;c<a;c++)
        {
            if(kdizi[c]>kdizi[c+1])
            {
                buyuk=kdizi[c];
                kdizi[c]=kdizi[c+1];
                kdizi[c+1]=buyuk;
            }
        }
    }
    printf("su anki dizi=");
    for(b=0;b<=a;b++)
    {
        printf("%d ",kdizi[b]);
    }
}

int pozitifmi(int a)
{
    if(a<=0)
    return 4;
    else 
    return 1;
}

int esitmi(int dizi[],int a)
{
    int b;
    for(b=0;b<a;b++)
    {
        if(dizi[a]==dizi[b])
        return 11;
    }
    return 1;
}

int main()
{
    int dizi[10],a;
    
    for(a=0;a<10;a++)
    {
        printf("\n%d. sayiyi giriniz:",a+1);
        scanf("%d",&dizi[a]);
        if(pozitifmi(dizi[a])==4)
        {
            printf("pozitiif sayi giriniz");
            a--;
        }
        else if(esitmi(dizi,a)==11)
        {
            printf("ayni sayiyi girmeyin");
            a--;
        }
        else
        sirala(dizi,a);
        
    }

    return 0;
}
