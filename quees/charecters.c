#include <stdio.h>

#define MAX 100

char queue[MAX];
int front = -1, rear = -1;

// enqueue function
void enqueue(char ch)
{
    if (rear == MAX - 1)
    {
        // queue full (normally exam e handle korte bole na)
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = ch;
}

// dequeue function
char dequeue()
{
    if (front == -1 || front > rear)
    {
        return '\0'; // queue empty
    }
    return queue[front++];
}

int main()
{
    char input[] = "EAS*Y*QUE***ST***IO*N***";
    int i = 0;

    while (input[i] != '\0')
    {
        if (input[i] == '*')
        {
            char value = dequeue();
            if (value != '\0')
                printf("%c ", value);
        }
        else
        {
            enqueue(input[i]);
        }
        i++;
    }

    return 0;
}
