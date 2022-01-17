#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tau=0,n;
    printf("Enter the positive integer n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            tau+=1;
        }
    }
    printf("Tau(%d)=%d\n",n,tau);
    return 0;
}

