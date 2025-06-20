#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void append(struct node **, int);
void addAtBeginning(struct node **, int);
void insertAtIndex(struct node **, int, int);
void display(struct node *);

int main()
{
    struct node *head = NULL;
    int choice, value, index;

    do
    {
        printf("\n1. Append at End\n");
        printf("2. Add at Beginning\n");
        printf("3. Insert at Index\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to append: ");
            scanf("%d", &value);
            append(&head, value);
            break;
        case 2:
            printf("Enter value to add at beginning: ");
            scanf("%d", &value);
            addAtBeginning(&head, value);
            break;
        case 3:
            printf("Enter index (starting from 0): ");
            scanf("%d", &index);
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtIndex(&head, index, value);
            break;
        case 4:
            display(head);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void append(struct node **head_add, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head_add;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_add == NULL)
    {
        *head_add = new_node;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void addAtBeginning(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAtIndex(struct node **head_ref, int index, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (index == 0)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct node *temp = *head_ref;
    int count = 0;

    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        printf("Invalid index! Insertion failed.\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void display(struct node *node)
{
    if (node == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
