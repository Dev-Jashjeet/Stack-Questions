// Menu Driven program for STACK... PUSH POP DISPLAY

# include <stdio.h>
# include <stdlib.h>
# define SIZE 5
int top = -1;

void pushStack(int stack[], int num) {
    if(top == SIZE-1) {
        printf("Stack is Full\n");
        return;
    }
    top++;
    stack[top] = num;
    return;
}

void popStack(int stack[]) {
    if(top == -1) {
        printf("No elements are present to POP\n");
        return;
    }
    printf("The popped number is %d\n", stack[top]);
    top--;
    return;
}

void displayStack(int stack[]) {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("The stack elements are");
    for(int i=top; i>=0; i--) {
        printf("%d\t", stack[i]);
    }
    printf("\n");
    return;
}

int main(void) {
    void pushStack(int [], int);
    void popStack(int []);
    void displayStack(int []);
    int stack[SIZE];
    int num;
    int choice;
    while(1) {
        printf("1. for PUSH\n");
        printf("2. for POP\n");
        printf("3. for DISPLAY\n");
        printf("4. for Exit\n");
        printf("Enter your choice");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                    printf("\nEnter the number to enter");
                    scanf("%d", &num);
                    pushStack(stack,num);
                    break;
            case 2: 
                    popStack(stack);
                    break;
            case 3: 
                    displayStack(stack);
                    break;
            case 4: 
                    printf("\nThankyou for using our program\n");
                    exit(0);
            default: 
                    printf("Please provide the correct choice\n");
        }
    }
    return 0;
}