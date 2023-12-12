#include <stdio.h>

void array_elements(int rows, int columns, int ar[rows][columns])
{
    printf("\n\n");
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the element of %d row and %d column:", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
    }
}
void array_printing(int rows, int columns, int a[rows][columns])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void array_transpose(int rows, int columns, int b[rows][columns])
{
    printf("\n\nTranspose of the given array is :-\n\n");
    int i = 0, j = 0;
    int c[columns][rows];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            c[j][i] = b[i][j];
        }
    }
    array_printing(columns, rows, c);
}
void array_multiplication(int rows1, int columns1, int a[rows1][columns1], int rows2, int columns2, int b[rows2][columns2])
{
    int i, j, l;
    if (columns1 == rows2)
    {
        int c[rows1][columns2];
        for (i = 0; i < rows1; i++) // Storing 0 at all positions.
        {
            for (j = 0; j < columns2; j++)
            {
                c[i][j] = 0;
            }
        }
        for (i = 0; i < rows1; i++) // Multiplication logic.
        {
            for (l = 0; l < columns2; l++)
            {
                for (j = 0; j < columns1; j++)
                {
                    c[i][l] += a[i][j] * b[j][l];
                }
            }
        }
        printf("\n\nMultiplication of the given arrays is :-\n\n");
        array_printing(rows1, columns2, c);
    }
    else
        printf("\n\nMultiplication of the given arrays is not possible!!\n\n");
}

void main()
{
    int rows1, columns1, rows2, columns2;
    printf("Enter the number of rows of first and second array respectively:");
    scanf("%d%d", &rows1, &rows2);
    printf("Enter the number of columns of first and second array respectively:");
    scanf("%d%d", &columns1, &columns2);
    int a[rows1][columns1];
    int b[rows2][columns2];
    array_elements(rows1, columns1, a);
    array_elements(rows2, columns2, b);
    printf("\n\nArray is :-\n\n");
    array_printing(rows1, columns1, a);
    printf("\n\nArray is :-\n\n");
    array_printing(rows2, columns2, b);
    array_multiplication(rows1, columns1, a, rows2, columns2, b);
    array_transpose(rows1, columns1, a);
    array_transpose(rows2, columns2, b);
    
}
