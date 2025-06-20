#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node **, int);
int pop(struct node **);
void display(struct node *);

int main()
{
    struct node *head = NULL;
    int choice, value;

    do
    {
        printf("\n1. Push to Stack\n");
        printf("2. Pop from Stack\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&head, value);
            break;
        case 2:
            printf("Popping value from stack...\n");
            value = pop(&head);
            if (value != -1)
            {
                printf("Popped value: %d\n", value);
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

void push(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
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

int pop(struct node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("Stack is empty. Nothing to delete.\n");
        return 0;
    }

    struct node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);

    printf("Top node deleted.\n");
    return temp->data;
}
