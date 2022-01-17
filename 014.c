#include<stdio.h>
#include<math.h>


void main()
{
	int N, i, flag = 0;
	printf("Enter N: ");
	scanf("%d", &N);
	if(N == 1)
		printf("%d is neither prime nor composite.\n", N);
	else
	{
		for(i = 2; i < sqrt(N); i++)
		if(N % i == 0)
		{
			flag = 1;
			break;
		}
		if(flag == 0)
			printf("%d is prime.\n", N);
		else
			printf("%d is not prime.\n", N);
	}
}
