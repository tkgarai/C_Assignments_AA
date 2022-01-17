#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i,j,temp;
    printf("Enter the no. of entries:");
    scanf("%d",&n);
    printf("Enter the entries:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
   for(i=0;i<n;i++)
        printf(" %d ",a[i]);
   printf("\n");
    return 0;
}

