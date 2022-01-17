#include <stdio.h>

int main()
{
    int i,j,n,a[50][50];
    printf("Enter the order of the latin square: ");
    scanf("%d",&n);
    printf("The latin square is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(i+j+1>n)
                a[i][j]=(i+j+1)%n;
             else
                a[i][j]=(i+j+1);
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

