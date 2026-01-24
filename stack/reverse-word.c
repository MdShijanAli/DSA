#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];
    printf("Enter a word: ");
    scanf("%s", str);

    // Push all characters of the string onto the stack
    for (int i = 0; i <= strlen(str) - 1; i++)
    {
        push(str[i]);
    }

    while (top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}