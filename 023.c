#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i,gcd;
    printf("Enter the ineger n and the element of Z_n:");
    scanf("%d%d",&n,&a);
    for(gcd=a;gcd>=1;gcd--)
    {
        if(a%gcd==0&&n%gcd==0)
            break;
    }
    if(gcd!=1)
        printf("Inverse of [%d] doesn't exist.",a);
    for(b=1;b<n;b++)
    {
        if((a*b)==1||(a*b)%n==1)
        {
            printf("The inverse of [%d] is [%d]",a,b);
            break;
        }
    }
    printf("\n");
    return 0;
}
