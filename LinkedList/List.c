#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void append(struct node **, int);
void display(struct node *);

int main()
{
    struct node *head = NULL;
    int choice, value;

    do
    {
        printf("1. Append\n");
        printf("2. Display\n");
        printf("3. Exit\n");
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
            display(head);
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

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
