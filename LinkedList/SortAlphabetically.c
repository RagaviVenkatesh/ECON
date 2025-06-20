#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct node
{
    char name[SIZE];
    struct node *next;
};

void insert_sorted(struct node **, char[]);
void display(struct node *);

int main()
{
    struct node *head = NULL;
    int choice;
    char name[SIZE];

    do
    {
        printf("\n1. Insert Name (Alphabetical Order)\n");
        printf("2. Display Names\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume leftover newline

        switch (choice)
        {
        case 1:
            printf("Enter name: ");
            fgets(name, SIZE, stdin);
            name[strcspn(name, "\n")] = '\0'; // remove newline
            insert_sorted(&head, name);
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

void insert_sorted(struct node **head_ref, char name[])
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    strcpy(new_node->name, name);
    new_node->next = NULL;

    // Insert at beginning or before head
    if (*head_ref == NULL || strcmp(name, (*head_ref)->name) < 0)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    // Traverse to find correct insertion point
    struct node *current = *head_ref;
    while (current->next != NULL && strcmp(current->next->name, name) < 0)
    {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nAlphabetically Ordered Names:\n");
    while (head != NULL)
    {
        printf("%s -> ", head->name);
        head = head->next;
    }
    printf("NULL\n");
}
