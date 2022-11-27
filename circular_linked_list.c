#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void Traversal(struct Node *head) {
    struct Node *ptr = head;
    do {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
}

int main() {
    struct Node *head;
    struct Node *two;
    struct Node *three;
    struct Node *fourth;

    // Allocate Memory
    head = (struct Node *) malloc(sizeof(struct Node));
    two = (struct Node *) malloc(sizeof(struct Node));
    three = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // Initialize the nodes
    head -> data = 7;
    head -> next = two;

    two -> data = 4;
    two -> next = three;

    three -> data = 12;
    three -> next = fourth;

    fourth -> data = 15;
    fourth -> next = head;

    // Traversal
    Traversal(head);
    return 0;
}