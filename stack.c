#include <stdio.h>

struct stack {
    int data[8];
    int top;
};

void init(struct stack *s);
int isEmpty(struct stack *s);
int isFull(struct stack *s);
int pop(struct stack *s);
void push(struct stack *s, int x);

int main() {
    struct stack s;
    int n;
    printf("Enter the Decimal Number: ");
    scanf("%d", &n);
    init(&s);
    while(n != 0) {
        if(!isFull(&s)) {
            push(&s, n%2);
            n = n/2;
        }
        else {
            printf("Stack Overflow!");
            return 0;
        }
    }
    printf("\nBinary Number is ");
    while(!(isEmpty(&s))) {
        printf("%d", pop(&s));
    }
    return 0;
}

void init(struct stack *s) {
    s->top = -1;
}

int isEmpty(struct stack *s) {
    if(s->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack *s) {
    if(s->top == 7) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *s, int x) {
    s->top = s->top + 1;
    s->data[s->top] = x;
}

int pop(struct stack *s) {
    int x;
    x = s->data[s->top];
    s->top = s->top - 1;
    return x;
}