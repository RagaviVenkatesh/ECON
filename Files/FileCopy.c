#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    int ch;

    // Input source and destination file names
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    // Open source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }

    // Open destination file in write mode
    destFile = fopen(destPath, "w");
    if (destFile == NULL)
    {
        printf("Error: Cannot create destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
