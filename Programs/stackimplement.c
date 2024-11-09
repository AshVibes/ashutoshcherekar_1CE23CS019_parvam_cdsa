#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    int capacity;
    int* array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack
        = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array
        = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
void push(struct Stack* stack, int item)
{
    if (isFull(stack)) {
        printf("Overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(struct Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Underflow\n");
        return INT_MIN;
    }
    return stack->array[stack->top--];
}
int peek(struct Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return stack->array[stack->top];
}
void display(struct Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    }
    else {
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->array[i]);
        }
    }
}
int main()
{
    struct Stack* stack = createStack(100);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("%d popped from stack\n", pop(stack));
    printf("Top element is %d\n", peek(stack));

    printf("Elements present in stack:\n");
    display(stack);

    return 0;
}
