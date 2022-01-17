#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,gcd,n;
    printf("Enter the positive integer n:");
    scanf("%d",&n);
    printf("The set of all units of (Z_n,+,.) is Z_n*={ ");
    for(i=1;i<n;i++)
    {

        for(gcd=i;gcd>=1;gcd--)
        {
            if(n%gcd==0&&i%gcd==0)
                break;
        }
        if(gcd==1)
        {
            if(i==n-1)
                printf("[%d] }",i);
            else
                printf("[%d], ",i);
        }

    }
    printf("\n");
    return 0;
}

