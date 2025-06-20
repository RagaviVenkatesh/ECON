#include <stdio.h>
#include <stdlib.h>

int **createArray(int, int);
void read(int **, int, int);
void print(int **, int, int);

int main()
{
    int **a, rows, cols;
    scanf("%d %d", &rows, &cols);
    a = createArray(rows, cols);
    read(a, rows, cols);
    print(a, rows, cols);
    free(a);
    return 0;
}

int **createArray(int rows, int cols)
{
    int **a;
    a = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        *(a + i) = (int *)malloc(cols * sizeof(int));
    return a;
}

void read(int **a, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }
}

void print(int **a, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}