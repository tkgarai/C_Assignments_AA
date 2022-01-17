#include<stdio.h>
#include<math.h>

int ch_prime(int);

void main()
{
	int N, i;
	printf("Enter N: ");
	scanf("%d", &N);
	printf("All prime factors of %d are:\n", N);
	for(i = 2; i <= N; i++)
		if(N % i == 0 && ch_prime(i) == 1)
			printf("%d\t", i);
	printf("\n");
}


int ch_prime(int N)
{
	int i, flag = 1;
	for(i = 2; i < sqrt(N); i++)
		if(N % i == 0)
		{
			flag = 0;
			break;
		}
	return flag;
}
