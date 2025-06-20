#include <stdio.h>
#include <stdlib.h>

int *createArray(int);
void read(int *, int);
void print(int *, int);

int main()
{
    int *a, n;
    scanf("%d", &n);
    a = createArray(n);
    read(a, n);
    print(a, n);
    free(a);
    return 0;
}

int *createArray(int n)
{
    int *a;
    a = (int *)malloc(n * sizeof(int));
    return a;
}

void read(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
}

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
    }
}