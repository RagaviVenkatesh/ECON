#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void enqueue(struct node **, int);
int dequeue(struct node **);
void display(struct node *);

int main()
{
    struct node *head = NULL;
    int choice, value;

    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(&head, value);
            break;
        case 2:
            value = dequeue(&head);
            if (value != -1)
            {
                printf("Dequeued value: %d\n", value);
            }
            break;
        case 3:
            display(head);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void enqueue(struct node **head_add, int new_data)
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
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int dequeue(struct node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("Queue is empty. Nothing to delete.\n");
        return -1;
    }

    struct node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
    return 0;
}
