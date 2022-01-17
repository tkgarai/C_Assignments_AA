#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,a[10][10];
    printf("Enter the no. of rows and columns of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the entries of matrix A:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

