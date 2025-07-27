#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct queue {
    int val;
    struct queue* next;
} Queue;

Queue* front = NULL;
Queue* rear = NULL;

void enqueue(int n) {
    Queue* temp = (Queue*)malloc(sizeof(Queue));
    if (temp == NULL) {
        printf("Bellek tahsisi basarisiz.");
        exit(1);
    }
    temp->val = n;
    temp->next = NULL;
    if (front == NULL)
        front = rear = temp;
    else {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue bos.");
        exit(1);
    }
    printf("Silinen deger: %d\n", front->val);
    Queue* temp = front;
    front = front->next;
    free(temp);
}

int main() {
    srand(time(NULL));

    int n = rand() % 10 + 1; // Rasgele 1 ile 10 arasında bir sayı seç
    int total_time = 0;

    for (int i = 0; i < n; i++) {
        int a = rand() % 5; // Her katta rastgele 0 ile 4 arasında bir sayı seç
        printf("%d. katta binecek kisi sayisi: %d\n", i + 1, a);
        enqueue(a);
        total_time += 2 * a + 3; // Her kişi 2 saniyede biner ve kat araları 3 saniyede çıkar
    }

    while (front != NULL) {
        dequeue();
    }

    printf("\nToplam gecirilen zaman: %d", total_time - 3); // Son kat arası çıkış süresi düzeltiliyor

    return 0;
}
