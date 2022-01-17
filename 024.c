#include <stdio.h>

int main()
{
    int i,gcd,n,phi = 0;
    printf("Enter the positive integer n: ");
    scanf("%d", &n);
    for(i=1;i<n;i++)
    {
        for(gcd=i;gcd>=1;gcd--)
        {
            if(n%gcd==0&&i%gcd==0)
            break;
        }
        if(gcd==1)
            phi+=1;
    }
    printf("phi(%d)=%d\n",n,phi);
    return 0;
}
