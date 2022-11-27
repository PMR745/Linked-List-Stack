#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *top) {
    struct Node *p = top;
    while(p!= NULL ){
        printf("Element = %d\n", p->data);
        p = p->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow!");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top) {
    if(isEmpty(*top)) {
        printf("Stack Underflow!");
    }
    else {
        struct Node *n = (*top);
        int x = (*top)->data;
        *top = (*top)->next;
        free(n);
        return x;
    }
}
int main()
{
    struct Node *top = NULL;
    top = push(top, 12);
    top = push(top, 22);
    top = push(top, 25);
    top = push(top, 31);
    int ele = pop(&top);
    printf("Popped Element is %d\n", ele);
    traversal(top);
    return 0;
}