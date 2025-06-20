#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This program implements a simple CRUD (Create, Read, Update, Delete) functionality for a text file.
#define FILE_NAME "message.txt"

// Function to trim the newline character from a string
// This is necessary because fgets() includes the newline character when reading input.
void trimNewline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

void createMessage()
{
    // Open the file in write mode to create a new message
    // If the file already exists, it will be overwritten.
    // If it does not exist, it will be created.
    // The file is opened in "w+" mode, which allows reading and writing.
    // If the file cannot be opened, an error message is displayed.
    // The user is prompted to enter a message, which is then written to the file.
    // After writing, the file is closed.
    // If the message is successfully created, a confirmation message is displayed.
    // If the file cannot be created, an error message is displayed.
    FILE *fp = fopen(FILE_NAME, "w+");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return;
    }

    char message[1000];
    printf("Enter your message: ");
    getchar(); // flush leftover newline from previous input
    // fgets is used to read a line of input from the user, including spaces.
    // The input is stored in the message array, which can hold up to 999 characters
    // (the last character is reserved for the null terminator).
    fgets(message, sizeof(message), stdin);
    // The newline character at the end of the input is trimmed to ensure clean output.
    trimNewline(message);
    // The message is written to the file.
    // The fprintf function is used to write the message to the file.
    fprintf(fp, "%s", message);
    // The file is closed to ensure that all data is written and resources are released.
    fclose(fp);
    // A confirmation message is displayed to the user.
    // This indicates that the message has been successfully created and stored in the file.
    printf("Message created.\n");
}

void readMessage()
{
    // Open the file in read mode to retrieve the stored message.
    // If the file does not exist or cannot be opened, an error message is displayed.
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        printf("No message found.\n");
        return;
    }

    char message[1000];
    fgets(message, sizeof(message), fp);
    trimNewline(message);
    printf("Stored Message: %s\n", message);
    fclose(fp);
}

void updateMessage()
{
    FILE *fp = fopen(FILE_NAME, "r+");
    if (fp == NULL)
    {
        printf("No message to update.\n");
        return;
    }

    char newMessage[1000];
    printf("Enter new message: ");
    getchar(); // flush leftover newline
    fgets(newMessage, sizeof(newMessage), stdin);
    trimNewline(newMessage);

    // Move the file pointer to the beginning of the file to overwrite the existing message.
    freopen(FILE_NAME, "w", fp); // Overwrite file
    fprintf(fp, "%s", newMessage);
    fclose(fp);
    printf("Message updated.\n");
}

void deleteMessage()
{
    // This function deletes the message file if it exists.
    // It attempts to remove the file using the remove function.
    if (remove(FILE_NAME) == 0)
    {
        printf("Message deleted.\n");
    }
    else
    {
        printf("No message to delete.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Message CRUD Menu ---\n");
        printf("1. Create Message\n");
        printf("2. Read Message\n");
        printf("3. Update Message\n");
        printf("4. Delete Message\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createMessage();
            break;
        case 2:
            readMessage();
            break;
        case 3:
            updateMessage();
            break;
        case 4:
            deleteMessage();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
