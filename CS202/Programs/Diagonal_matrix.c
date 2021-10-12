#include <stdio.h>
#include<stdlib.h>

void get_input(int n, int **arr);
void print_output(int n, int **arr);

int main()
{
    int n, **arr, i;
    printf("Enter n: ");
    scanf("%d", &n);
    arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    get_input(n, arr);
    print_output(n, arr);
    return 0;
}

void get_input(int n, int **arr)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(arr + i) + j));
        }
    }
}

void print_output(int n, int **arr)
{
    int i, j;
    printf("Principal Diagonal: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", *(*(arr + i) + j));
            }
        }
    }
    printf("\nSecondary Diagonal: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(*(arr + i) + n-1-i));    
    }
}
