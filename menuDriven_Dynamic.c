// Menu Driven Dynamic Implementation of Stack PUSH, POP and Display

# include <stdio.h>
# include <stdlib.h>

struct Stack {
    int info;
    struct Stack* next;
};
typedef struct Stack node;

node* Push(node* top, int num) {
    node* newNode;
    newNode = (node*) malloc(sizeof(node));
    newNode->info = num;
    newNode->next = top;
    top = newNode;
    return top;
}

node* Pop(node* top) {
    if(top == NULL) {
        printf("Link List is empty\n");
        return NULL;
    }
    printf("The Popped element is %d\n", top->info);
    node* temp;
    temp = top;
    top = top->next;
    free(temp);
    return top;
}

void displayList(node* top) {
    if(top == NULL) {
        printf("Link List is empty, nothing to display!\n");
        return;
    }
    printf("Link List elements are\t");
    while(top != NULL) {
        printf("%d\t", top->info);
        top = top->next;
    }
    printf("\n");
    return;
}
int main(void) {
    node* Push(node*, int);
    node* Pop(node*);
    void displayList(node*);
    node* top;
    int num;
    int choice;
    top = NULL;
    while(1) {
        printf("1. for PUSH\n");
        printf("2. for POP\n");
        printf("3. for Display\n");
        printf("4. for Exit\n");
        printf("Select your choice");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                    printf("Enter the number to enter");
                    scanf("%d", &num);
                    top = Push(top,num);
                    break;
            case 2: 
                    top = Pop(top);
                    break;
            case 3: 
                    displayList(top);
                    break;
            case 4: 
                    printf("ThankYou for using our software\n");
                    exit (0);
            default: 
                    printf("Wrong Choice");
        }
    }
    return 0;
}