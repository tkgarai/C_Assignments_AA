#include <stdio.h>

int main()
{
    int i,j,n,a[50][50],b[50];
    printf("Enter the order(odd) of the latin square: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((2*i-1)>n)
            b[(2*i-1)%n]=i;
        else
            b[(2*i-1)]=i;
    }
    printf("The latin square with diagonal elements in ascending order is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(i+j+1>n)
                a[i][j]=b[(i+j+1)%n];
             else
                a[i][j]=b[(i+j+1)];
             printf("%d ",a[i][j]);
        }
	printf("\n");
    }
    return 0;
}

