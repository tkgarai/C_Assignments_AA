#include <stdio.h>

int main()
{
    int i,j,n,a[10][10],sum=0;
    printf("Enter the order of matrix A:");
    scanf("%d",&n);
    printf("Enter the entries of matrix A:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
                if(i+j==n-1)
                    sum+=a[i][j];
    printf("Cross Tr(A)=%d\n",sum);
    return 0;
}

