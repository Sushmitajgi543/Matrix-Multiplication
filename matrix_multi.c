#include <stdio.h>

void main()
{
    int n, m, sum ;
    
    printf("Enter the row for matrix: ");
    scanf("%d", &n);
    printf("Enter the column for  matrix: ");
    scanf("%d", &m);

    int matrix1[n][m];
    int matrix2[n][m];
    printf("give input for matrix 1\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("---matrix-----\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");

    printf("give input for matrix 2\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("---matrix-----\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");

    int multi[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum=0;
            for (int k = 0; k < m; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            multi[i][j] = sum;
        }
    }
    printf("---matrix-multiplication----\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", multi[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");

  
}
