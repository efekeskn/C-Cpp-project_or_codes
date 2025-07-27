#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// yazılan kelimeyi ve cümleyi tersten yazdırma
void kelimeleriterstenyazdir(char a[])
{
    int b,c;
    b=strlen(a);
    for(c=b;c>=0;c--)
    {
        if(a[c]==' ' || c==0)
        {
            for(int i=c;i<b;i++)
            {
                printf("%c",a[i]);
            }
            b=c;
        }
    }
}

void cumleyiterstenyazdir(char a[])
{
    int c=strlen(a);
    for(;c>0;c--)
    {
        printf("%c",a[c-1]);
    }
}

int main()
{
    char cumle[100];
    int a;
    
    printf("lutfen cumlenizi yaziniz:");
    fgets(cumle,100,stdin);
    
    printf("lutfen yapmak istediginiz işlemi giriniz: kelimeleri tersten yazdır için '1' cumleyi tersten yazdırmak için '2' :" );
    scanf("%d",&a);
    
    if(a==1)
    {
        kelimeleriterstenyazdir(cumle);
    }    
    else if(a==2)
    {
       cumleyiterstenyazdir(cumle);
    }
    
    
    return 0;
}