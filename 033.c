#include <stdio.h>

int main()
{
    int i,j,m,n,a[10][10],b[10][10];
    printf("Enter the no. of rows and columns of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the entries of matrix A:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(a[i][j]!=-a[j][i])
                    break;
            }
            if(j!=m)
                break;
        }
        if(i==m)
            printf("The matrix is skew-symmetric.\n");
        else
            printf("The matrix is not skew-symmetric.\n");
    }
    else
        printf("The matrix is not skew-symmetric.\n");
    return 0;
}

