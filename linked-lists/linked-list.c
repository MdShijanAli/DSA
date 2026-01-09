#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    // If list is empty, make new node as head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Insert new node at the end
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
        {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to free the linked list
void freeList(struct Node *head)
{
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node *head = NULL;
    int n, value;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    // Display the linked list
    printf("\n");
    displayList(head);

    // Free the allocated memory
    freeList(head);

    return 0;
}
