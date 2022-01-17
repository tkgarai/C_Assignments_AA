#include <stdio.h>

int main()
{
    int i,j,n;
    float a[10][10],p[10][10],q[10][10];
    printf("Enter the order of A: ");
    scanf("%d",&n);
    printf("Enter the entries of matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           scanf("%f",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            p[i][j]=(a[i][j]+a[j][i])/2.0;
            q[i][j]=(a[i][j]-a[j][i])/2.0;
        }
    printf("A can be written as the sum of the symmetric matix: \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
           printf("%5.2f  ",p[i][j]);
       printf("\n");
    }
    printf("and the skew-symmetric matrix: \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
           printf("%5.2f  ",q[i][j]);
       printf("\n");
    }
    return 0;
}

