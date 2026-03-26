#include <stdio.h>

//STACk
struct Stack {
    int arr[100];
    int topIndex;
};

void initStack(struct Stack* s) {
    s->topIndex = -1;
}

// Add to stack
void push(struct Stack* s, int x) {
    if (s->topIndex >= 99) {
        printf("Stack Overflow\n");
    } else {
        s->topIndex++;
        s->arr[s->topIndex] = x;
    }
}

// Remove from stack
void pop(struct Stack* s) {
    if (s->topIndex < 0) {
        printf("Stack Underflow\n");
    } else {
        s->topIndex--;
    }
}

// Return top element
int top(struct Stack* s) {
    if (s->topIndex < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return s->arr[s->topIndex];
    }
}