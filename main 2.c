#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
    
    int val;
    struct queue* next;
}Queue;

Queue* front=NULL;
Queue* rear=NULL;

Queue* newnode(int n)
{
    Queue* temp=(Queue*)malloc(sizeof(Queue));
    if(temp==NULL)
        exit(1);
    temp->val=n;
    front=temp;
    rear=temp;
    temp->next=NULL;
    return temp;
}
void enqueue(int n)
{
    Queue* temp=(Queue*)malloc(sizeof(Queue));
    if(temp==NULL)
        exit(1);
    temp->val=n;
    temp->next=NULL;
    rear->next=temp;
    rear=rear->next;
}
int dequeue_and_time()
{
    Queue* temp=(Queue*)malloc(sizeof(Queue));
    int a;
    
    if(front==NULL)
    {
        printf("queue is empty.");
        exit(1);
    }
    temp=front;
    front=front->next;
    temp->next=NULL;
    a=temp->val;
    free(temp);
    return a;
}



int main()
{
    int n,zaman,top_zaman=0;
    
    printf("lutfen sirada kac kisinin oldugunu yaziniz:");
    scanf("%d",&n);
    
    printf("lutfen 1. kisinin bekleme suresini giriniz (dk):");
        scanf("%d",&zaman);
    Queue* que=newnode(zaman);
    
    
    for(int i=1;i<n;i++)
    {
        printf("lutfen %d. kisinin bekleme suresini giriniz (dk):",i+1);
        scanf("%d",&zaman);
        enqueue(zaman);
    }
    for(int i=0;i<n;i++)
    {
        top_zaman+=dequeue_and_time();
    }
    
    printf("toplam beklnecek sure:%d",top_zaman);
    
    return 0;
}