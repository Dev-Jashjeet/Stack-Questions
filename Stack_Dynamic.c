// Dynamic Implementation of Stack for PUSH and Display

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

void displayList(node* top) {
    printf("The list elements are\t");
    while(top != NULL) {
        printf("%d\t", top->info);
        top = top->next;
    }
    return;
}

int main(void) {
    node* Push(node*, int);
    void displayList(node*);
    node* top;
    int num;
    int another = 1;
    top = NULL;
    while(another == 1) {
        printf("Enter the number to enter");
        scanf("%d", &num);
        top = Push(top,num);
        printf("YES/NO 1/0");
        scanf("%d", &another);
    }
    displayList(top);
    return 0;
}