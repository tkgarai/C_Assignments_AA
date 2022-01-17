#include<stdio.h>

int main()
{
	int N, reversed_N = 0;
	printf("Enter N: ");
	scanf("%d", &N);
	while(N != 0)
	{
		reversed_N = (reversed_N * 10) + (N % 10);
		N = N / 10;
	}
	printf("The integer in reversed form: %d\n", reversed_N);
}
