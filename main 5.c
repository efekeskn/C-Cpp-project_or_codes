#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int duz(char str[])
{
    int a=0;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='(')
            a++;
        else
            a--;
        if(a==-1)
            return 0;
    }
    return 1;
}

typedef struct string{
    
    char str[20];
}string;

int factor(int n)
{
    int toplam=1;
    while(n>1)
    {
        toplam*=n;
        n--;
    }
    return toplam;
}


int main()
{
   int n,k=0;
   
   printf("n sayisini giriniz.");
   scanf("%d",&n);
    char aray[2*n+1],ch[2*n+1];
   
   int buffer=factor(2*n)/(factor(n)*factor(n));
   
   string strs[buffer];

    for(int i=0;i<n;i++)
        aray[i]='(';
    
    for(int j=n;j<2*n;j++)
        aray[j]=')';
    

    for(int i=0;i<2*n;)
    {
        for(int j=i+1;j<2*n;j++)
        {
            char ch;
            ch= aray[i];
            aray[i]=aray[j];
            aray[j]=ch;
            if(duz(aray)==0)
            {
                aray[j]=aray[i];
                aray[i]=ch;
            }
            else if(strstr(ch,aray)==NULL);
            {
                strcpy(strs[k].str,aray);
                k++;
                strcat(ch,aray);
            }
        }
    }
    for(int i=0;i<buffer;i++)
    {
        printf("%s\n",strs[i].str);
    }

    return 0;
}
