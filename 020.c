#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,j,flag,fact,pow;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("\nThe prime factorization of %d is %d = ",n, n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                  flag=1;
                  break;
                }
            }
            if(flag==0)
            {
                 pow=1;
                 for(fact=i*i;fact<=n;)
                 {
                    if(n%fact==0)
                    {
                        pow+=1;
                        fact=fact*i;
                    }
                        else
                            break;
                 }
                 printf("pow(%d,%d)",i,pow);
            }
        }
    }
    printf("\n");
    return 0;
}
