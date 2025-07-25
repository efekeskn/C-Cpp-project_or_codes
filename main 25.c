#include <stdlib.h>
#include <stdio.h>

struct arr {
    int a;
    struct arr* next;
};

int main() {
    struct arr *head = NULL;
    struct arr *ptr = NULL;
    
    for(int i = 0; i < 5; i++) {
        struct arr *new_node = (struct arr*)malloc(sizeof(struct arr));
        if (new_node == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        printf("Please enter an integer value for the array: ");
        scanf("%d", &(new_node->a));
        new_node->next = NULL;
        
        if (head == NULL) {
            head = new_node;
            ptr = head;
        } else {
            ptr->next = new_node;
            ptr = ptr->next;
        }
    }
    
    ptr = head;
    printf("Elements in the linked list: ");
    while(ptr != NULL) {
        printf("%d ", ptr->a);
        ptr = ptr->next;
    }

    // Free memory
    ptr = head;
    while (ptr != NULL) {
        struct arr* temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
}
