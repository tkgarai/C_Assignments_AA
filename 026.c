#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sigma=0;
    printf("Enter the positive integer n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            sigma+=i;
    }
    printf("Sigma(%d)=%d\n",n,sigma);
    return 0;
}
