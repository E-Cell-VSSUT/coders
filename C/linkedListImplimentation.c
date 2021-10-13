//! Linked list implimentatio of stack
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
};
struct Node* top = NULL;

void push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void pop(){
    struct Node* temp = top;
    if(top==NULL) return;
    top = top->link;
    free(temp);
}
void print(){
    struct Node* temp = top;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
void Top(){
    printf("%d \n", top->data);
}
int main(){
    push(1);
    push(2);
    push(3);
    print();
    pop();
    print();
    Top();
}