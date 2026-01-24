#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enquee(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequee()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Dequeued: %d\n", queue[front++]);
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enquee(10);
    enquee(20);
    enquee(30);
    display();
    dequee();
    display();
    enquee(40);
    enquee(50);
    enquee(60);
    enquee(70); // This should show overflow
    display();
    dequee();
    dequee();
    display();
    return 0;
}