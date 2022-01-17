#include <stdio.h>

int main()
{
    int n,n1,a,i,base=1,decimal=0;
    printf("Enter the positive integer(in binary): ");
    scanf("%d",&n);
    n1=n;
    for(i=0;n>0;i++)
    {
        a=n%10;
        decimal+=a*base;
        n=n/10;
        base=base*2;
    }
    printf("The decimal representation of %d is: %d\n",n1,decimal);
    return 0;
}

