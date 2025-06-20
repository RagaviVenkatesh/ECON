#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char name[50];
    char phone[15];
};

void addContact(struct Contact phonebook[], int *count)
{
    if (*count >= MAX)
    {
        printf("Phonebook is full!\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", phonebook[*count].name);
    printf("Enter Phone Number: ");
    scanf(" %[^\n]", phonebook[*count].phone);

    (*count)++;
    printf("Contact added successfully!\n");
}

void displayContacts(struct Contact phonebook[], int count)
{
    if (count == 0)
    {
        printf("No contacts to display.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s - %s\n", i + 1, phonebook[i].name, phonebook[i].phone);
    }
}

void searchContact(struct Contact phonebook[], int count)
{
    char searchName[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < count; i++)
    {
        if (strcasecmp(phonebook[i].name, searchName) == 0)
        {
            printf("Found: %s - %s\n", phonebook[i].name, phonebook[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found.\n");
    }
}

int main()
{
    struct Contact phonebook[MAX];
    int count = 0, choice;

    do
    {
        printf("\n--- Phonebook Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact(phonebook, &count);
            break;
        case 2:
            displayContacts(phonebook, count);
            break;
        case 3:
            searchContact(phonebook, count);
            break;
        case 4:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
