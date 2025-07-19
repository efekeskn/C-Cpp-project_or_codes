#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct queue{
    
    int val;
    struct queue* next;
    
}Queue;

Queue* front=NULL;
Queue* rear=NULL;

Queue* que=NULL;

void newqueue(int n)
{
    Queue* temp=(Queue*)malloc(sizeof(Queue));
    
    temp->val=n;
    temp->next=NULL;
    front=temp;
    rear=temp;
    
}

void enqueue(int n)
{
    if(front==NULL || rear==NULL)
    {
        newqueue(n);
        return;
    }
    
    Queue* temp=(Queue*)malloc(sizeof(Queue));
    
    temp->val=n;
    temp->next=NULL;
    rear->next=temp;
    rear=rear->next;
}

void dequeue()
{
    if(front==NULL)
    {
        printf("the quee is empty.");
        exit(1);
    }
    
    printf("silinen deger: %d\n",front->val);
    Queue* temp=front;
    front=front->next;
    temp->next=NULL;
    
   // free(temp);
}


int main()
{
    srand(time(NULL));
    
    int n=rand()%10+1,tot_time=0;
    
    for(int i=0;i<n;i++)
    {
        int a=rand()%5;
        printf("%d. katta binecek kişi sayisi:%d\n",i+1,a);
        enqueue(a);
        tot_time+=2*a+3; //her kisi iki saniyede binmektedir ve kat aralarini 3 saniyede cikar
    }
    
    while(front!=NULL)
    {
        dequeue();
    }
    
    printf("\n\ntoplam geçirilen zaman: %d",tot_time-3);
    
    
    return 0;
}

