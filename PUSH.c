// PUSH or insertion of number and Display of Stack

# include <stdio.h>
# include <stdlib.h>
# define SIZE 5 // Size of Stack
int top = -1; // Global variable

void pushStack(int stack[], int num) {
    if(top == SIZE-1) {
        printf("Stack is full\n");
        return;
    }
    top++;
    stack[top] = num;
    
    return;
}

void displayStack(int stack[]) {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are");
    for(int i = top; i>=0; i--) {
        printf("%d\t", stack[i]);
    }
    return;
}

int main(void) {
    void pushStack(int [], int);
    void displayStack(int []);
    int stack[SIZE-1];
    int num;
    int another = 1;
    while(another == 1) {
        printf("Enter the number to insert");
        scanf("%d", &num);
        pushStack(stack, num);
        printf("YES/NO 1/0");
        scanf("%d", &another);
    }
    displayStack(stack);
    return 0;
} 
