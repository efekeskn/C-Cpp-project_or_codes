#include <stdio.h>
#include <stdlib.h>

// Bağlı liste düğümü
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Yeni bir düğüm oluşturur
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Kuyruğa eleman ekler
void enqueue(int data) {
    struct Node* temp = newNode(data);
    if (rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

// Kuyruktan eleman çıkarır ve döndürür
int dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    struct Node* temp = front;
    int data = temp->data;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
    return data;
}

// Kuyruğun başındaki elemanı döndürür
int peek() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return front->data;
}

// Kuyruk boş mu kontrol eder
int isEmpty() {
    return (front == NULL);
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Dequeued item: %d\n", dequeue());
    printf("Dequeued item: %d\n", dequeue());
    printf("Dequeued item: %d\n", dequeue());
    printf("Dequeued item: %d\n", dequeue());

    return 0;
}
