#include<stdio.h>


void main()
{
	int N, i, sum = 0;
	printf("Enter N: ");
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
		sum += i * i;
	printf("The sum is: %d\n", sum);
}
