#include <stdio.h>
#define MAX_SIZE 100

// Yığın veri yapısı tanımı
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Yığının başlangıç durumunu ayarlayan fonksiyon
void initializeStack(Stack *stack) {
    stack->top = -1; // Yığının başlangıçta boş olduğunu belirtmek için top -1 olarak ayarlanır
}

// Yığında eleman ekleyen fonksiyon (push)
void push(Stack *stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Yığın dolu, eleman eklenemez.\n");
        return;
    }
    stack->top++;
    stack->items[stack->top] = value;
}

// Yığından eleman çıkaran fonksiyon (pop)
int pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Yığın boş, eleman çıkarılamaz.\n");
        return -1; // Hata durumunda -1 döndürülür
    }
    int removedItem = stack->items[stack->top];
    stack->top--;
    return removedItem;
}

// Yığının en üstündeki elemanı döndüren fonksiyon (top)
int peek(Stack *stack) {
    if (stack->top == -1) {
        printf("Yığın boş, üst eleman yok.\n");
        return -1; // Hata durumunda -1 döndürülür
    }
    return stack->items[stack->top];
}

// Yığının boş olup olmadığını kontrol eden fonksiyon (IsEmpty)
int isEmpty(Stack *stack) {
    return stack->top == -1; // Yığın boş ise 1, değilse 0 döndürülür
}

int main() {
    Stack myStack;
    initializeStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Yığından çıkarılan eleman: %d\n", pop(&myStack));
    printf("Yığından çıkarılan eleman: %d\n", pop(&myStack));

    printf("Yığının en üstündeki eleman: %d\n", peek(&myStack));

    printf("Yığın boş mu? %s\n", isEmpty(&myStack) ? "Evet" : "Hayır");

    return 0;
}
