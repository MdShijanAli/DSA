#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct node
{
    int data;
    struct node *next;
} node;

// Function to create a new node
node *createNode(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert an element in sorted order
node *insert_sorted(node *head, node *element)
{
    // If list is empty or element should be inserted at the beginning
    if (head == NULL || element->data < head->data)
    {
        element->next = head;
        return element;
    }

    // Find the correct position to insert
    node *current = head;
    while (current->next != NULL && current->next->data < element->data)
    {
        current = current->next;
    }

    // Insert the element
    element->next = current->next;
    current->next = element;

    return head;
}

// Function to display the linked list
void displayList(node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    printf("Sorted Linked List: ");
    node *temp = head;
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
void freeList(node *head)
{
    node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    node *head = NULL;
    int n, value;

    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }

    printf("Enter %d numbers (will be inserted in sorted order):\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &value);

        // Create a new node
        node *newNode = createNode(value);

        // Insert in sorted order
        head = insert_sorted(head, newNode);

        // Display the list after each insertion
        printf("After inserting %d: ", value);
        displayList(head);
    }

    // Display final sorted list
    printf("\nFinal ");
    displayList(head);

    // Free the allocated memory
    freeList(head);

    return 0;
}
