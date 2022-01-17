/*2. Given two matrices A and B, you need to write a C program to get C=AB (Multiplication of A and B)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, m, n, p, q, a[10][10], b[10][10], c[10][10];
    printf("Enter the # of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("\n\nEnter the entries of matrix A row-wise: ");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
           scanf("%d", &a[i][j]);
    printf("\n\nEnter the # of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    printf("\n\nEnter the entries of matrix B row-wise: ");
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
           scanf("%d", &b[i][j]);
    if(n == p)
    {
        printf("\n\nMultiplying A and B we get:\n");
        for(i = 0; i < m; i++)
        {
           for(j = 0; j < q; j++)
           {
               c[i][j] = 0;
               for(k = 0; k < n; k++)
                 c[i][j] += a[i][k] * b[k][j];
               printf("%4d\t", c[i][j]);
           }
           printf("\n");
        }
	printf("\n");
    }
    else
        printf("\n\nMatrix multiplication is not possible.\n");
    return 0;
}

