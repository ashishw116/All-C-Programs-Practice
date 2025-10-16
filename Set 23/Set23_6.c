#include<stdio.h>
void main()
{
    int rows, columns;
    printf("\nEnter rows and columns of matrix: ");
    scanf("%d %d", &rows, &columns);

    if (rows == columns)
    {
        int m[rows][columns];
        int size = rows * columns;

        printf("\nEnter the elements of matrix:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
                scanf("%d", &m[i][j]);
        }

        printf("\nEntered elements of matrix:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }

        int arr[size], n = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
                arr[n++] = m[i][j];
        }

        printf("\nElements of array:\n");
        for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);
    }
    else
        printf("\nThis is not a square matrix.");
}
