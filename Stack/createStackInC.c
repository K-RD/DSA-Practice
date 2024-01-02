#include<stdio.h> // For standard input output functions like printf(), scanf()
#include<stdlib.h> // For dynamic memory allocation functions like malloc(), calloc(), realloc(), free()

struct MyStack
{
    int size;
    int top;
    int *arr;
};

// Function to initialize the stack
void initializeStack(struct MyStack *stack, int size)
{
    // Allocate memory for stack 
    // Here -> is used instead of . because stack is a pointer variable
    // So, (*stack).size can be written as stack->size
    stack->size = size;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->size * sizeof(int));
}
void push(struct MyStack *stack, int x){
    if(((*stack).top)< ((*stack).size)){
        (*stack).top++;
        (*stack).arr[((*stack).top)]=x;
    }else{
        printf("Stack overflow! cannot push %d.\n",x);
    }

}
int pop(struct MyStack *stack){
    if((*stack).top >=0){
        int res=(*stack).arr[(*stack).top];
        (*stack).top--;
        return res;
    }else{
        printf("Stack underflow! We cannot pop from an empty stack.\n");
        return -1;
    }
}
int peek(struct MyStack *stack){
    if ((*stack).top >= 0){
        return (*stack).arr[(*stack).top];
    }else{
        printf("Stack is Empty!, We cannot peek.\n");
        return -1;
    }
}
int size(struct MyStack *stack){
    return ((*stack).size);
}
int isEmpty(struct MyStack *stack){
    return ((*stack).top==-1);
}
void printStack(struct MyStack *stack){
    for(int i=0; i<=(*stack).top;i++){
        printf("%d\t",((*stack).arr[i]));
    }
    printf("\n");
}


int main() {
    struct MyStack stack;
    initializeStack(&stack, 10);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 6);
    push(&stack, 7);
    push(&stack, 8);
    push(&stack, 9);

    printStack(&stack);

    printf("Peek: %d\n", peek(&stack));
    printf("Pop: %d\n", pop(&stack));
    printf("Size: %d\n", size(&stack));

    printStack(&stack);

    return 0;
}