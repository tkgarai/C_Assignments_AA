#include<stdio.h>


void main()
{
	int N, i = 0, j = 1, k = 0, fib = 0, sum = 0;
	printf("Enter N: ");
	scanf("%d", &N);
	while(i <= N)
	{
		fib = j + k;
		j = k;
		k = fib;
		i += 1;
		printf("%d \t", fib);
		sum += fib;
	}
	printf("___These are first %d Fibonacci Numbers.\n", N);
	printf("There sum is: %d\n", sum);
}
