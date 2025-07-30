#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct str{
    int ad;
    struct str *next;
};

void SonaEkle(struct str* head,struct str* ekle)
{
    struct str* current=head;
    
    while(current->next!=NULL)
        current=current->next;
    current->next=ekle;
}

int main()
{
    struct str * head=NULL,*ptr=NULL,*strs=NULL;
    
    head=(struct str*)malloc(sizeof(struct str));
    ptr=head;
    strs=head;
    
    for(int i=0;i<10;i++)
    {
        head->ad=i+1;
        head->next=(struct str*)malloc(sizeof(struct str));
        head=head->next;
    }
    SonaEkle(ptr,strs);
    
    while(ptr->next!=NULL)
    {
        printf(" deger-->%d\n",ptr->ad);
        ptr=ptr->next;
    }
    
    free(ptr);
    free(head);
    free(strs);
    return 0;
}
