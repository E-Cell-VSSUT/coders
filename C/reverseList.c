#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* link;
};
struct Node* head =NULL;
int stack[100];
int top = -1;

void push(int x){
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
}
void pushStack(){
   struct Node* temp = head;
    while(temp!=NULL){
        stack[++top] = temp->data;
        temp = temp->link;
    }
}
void popStack(int stack[]){
    while(top>=0){
        printf("%d", stack[top--]);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pushStack();
    popStack(stack);
    return 0;
}