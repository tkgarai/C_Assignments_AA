#include<stdio.h>

int main()
{
    int n,n1,a[10],i;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    n1=n;
    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
    printf("The binary representation of %d is: ",n1);
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

