#include <stdio.h>
#include <math.h>

int ch_prime(int);
 //the function outputs 0 if the input is not prime, else 1
int main()
{
    int a,b,i,count=0;
    printf("Enter the interval: ");
    scanf("%d %d",&a,&b);
    for(i = a; i <= b-2; i++)
        if((ch_prime(i)) == 1 && (ch_prime(i+2)) == 1)
        {
            printf("(%d,%d)\t",i,i+2);
            count++;
        }
    if(count==0)
        printf("There exists no twin primes in the interval %d and %d.\n", a, b);
    else
        printf("are twin primes between %d and %d.\n",a,b);
    return 0;
}

int ch_prime(int n)
{
    int i, flag=1;
    if(n == 1)
	    return 0;
    else
    {
    	 for(i=2;i<=sqrt(n);i++)
    	{
        	if(n%i==0)
        	{
            		flag=0;
           		 return flag;
       		 }
    	}
        return flag;

    }
}

