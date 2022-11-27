#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *previous;
};

void Traversal(struct Node *head) {
    struct Node *ptr = head;
    while(ptr != NULL) {
        printf("Element = %d\n", ptr->data);
        ptr = ptr -> next;
    }
}

void ReverseTraversal(struct Node *head) {
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp -> next;
    }

    while(temp != NULL) {
        printf("Element = %d\n", temp->data);
        temp = temp->previous;
    }
    
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
    head -> previous = NULL;

    two -> data = 4;
    two -> next = three;
    two -> previous = head;

    three -> data = 12;
    three -> next = fourth;
    three -> previous = two;

    fourth -> data = 15;
    fourth -> next = NULL;
    fourth -> previous = three;

    // Traversal
    Traversal(head);

    // Reverse Traversal
    ReverseTraversal(head);
    return 0;
}