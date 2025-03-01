#include "d_node.h"
#include <iostream>
using namespace std;

void eraseAll(node<int>*& front, int target) {

    while (front != nullptr && front->nodeValue == target) {
        node<int>* temp = front;
        front = front->next; 
        delete temp;        
    }

    node<int>* current = front;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->nodeValue == target) {
            node<int>* temp = current->next;
            current->next = current->next->next; 
            delete temp;                         
        } else {
            current = current->next; 
        }
    }
}

int main() {

    node<int>* list = nullptr;

    
    list = new node<int>(3, list); 
    list = new node<int>(4, list); 
    list = new node<int>(3, list); 
    list = new node<int>(2, list); 
    list = new node<int>(1, list); 
    list = new node<int>(3, list); 

    
    cout << "Original list: ";
    node<int>* current = list;
    while (current != nullptr) {
        cout << current->nodeValue << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    int target = 3;
    eraseAll(list, target);

    cout << "List after erasing " << target << ": ";
    current = list;
    while (current != nullptr) {
        cout << current->nodeValue << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
