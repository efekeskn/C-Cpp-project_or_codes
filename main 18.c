//tic tac toe
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

void matrisiyazdır(char matris[9])
{
    int a;
    for(a=0;a<9;a++)
    {
        printf("%c  ",matris[a]);
        if(a%3==2)
        printf("\n");
        
    }
}

void Ogiriş(char matris[],int a)
{
    matris[a-1]='O';
}

void Xgiriş(char matris[],int a)
{
    matris[a-1]='X';
}

int  dogrumu(char matris[],int a)
{
    if(matris[a-1]=='O' || matris[a-1]=='X')
    return 0;
    else 
    return 1;
}

int kazandimi(char matris[])
{
    int a;
    for(a=0;a<9;a++)
    {
        if(a%3==0 && matris[a]==matris[a+1] && matris[a]==matris[a+2])
        {
            return 1;
        }
        else if(a%3==0 && matris[a]==matris[a+3] && matris[a]==matris[a+6])
        {
            return 1;
        }
        else if( (matris[0]==matris[4] && matris[0]==matris[8]) || (matris[2]==matris[4] && matris[2]==matris[6]))
        {
            return 1;
        }
        else 
        return 0;
    }
}

int main()
{
    char matris[9]={'1','2','3','4','5','6','7','8','9'};
    int a,b=0;
    matrisiyazdır(matris);
    while(b<=8)
    {
        
        printf("lütfen O için bir kutu seçiniz:");
        scanf("%d",&a);
        if(a>9 || a<1)
        {
            printf("lütfen 1-9 arasında bir sayı seçin \n");
            continue;
        }
        if(dogrumu(matris,a)==1)
        {    Ogiriş(matris,a);
             matrisiyazdır(matris);
             if(kazandimi(matris)==1)
             {
                 printf("kazanan O takımı");
                 return 0;
             }
             b++;
            if(b==5)
            break;
             
        }     
        else
            continue;
        tekrar:
        printf("lütfen X için bir kutu seçiniz:");
        scanf("%d",&a);
         if(a>9 || a<1)
        {
            printf("lütfen 1-9 arasında bir sayı seçin \n");
            goto tekrar;
        }
        if(dogrumu(matris,a)==1)
        {
            Xgiriş(matris,a);
            matrisiyazdır(matris);
             if(kazandimi(matris)==1)
             {
                 printf("kazanan X takımı");
                 return 0;
             }
            
            
        }    
        else
        goto tekrar;
        
        
           
        
        
    }
     printf("durum berabere");
    
    return 0;
}



