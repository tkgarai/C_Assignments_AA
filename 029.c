#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,p,q,a[100][100],b[100][100],c[100][100];
    printf("Enter the no. of rows and columns of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the entries of matrix A:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    printf("Enter the no. of rows and columns of matrix B: ");
    scanf("%d%d",&p,&q);
    printf("Enter the entries of matrix B: ");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
           scanf("%d",&b[i][j]);
    if(m==p&&n==q)
    {
    	printf("A+B =\n");
        for(i=0;i<p;i++)
        {
           for(j=0;j<q;j++)
           {
               c[i][j]=a[i][j]+b[i][j];
               printf("%d ",c[i][j]);
           }
           printf("\n");
        }
    }
    else
        printf("Matrix addition is not possible.\n");
    return 0;
}

