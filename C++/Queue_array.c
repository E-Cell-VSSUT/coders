//Queue Implemention using array
#include <stdio.h>
#include <stdlib.h>
#define max 10
int queue_array[max], front = -1, rear = -1;
void enqueue()
{
    int item;
    if (rear == max - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter the element to be inserted:");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        printf("Element deleted from queue is :%d\n", queue_array[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is:");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice");
        }
    }
    return 0;
}