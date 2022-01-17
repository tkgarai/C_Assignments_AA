#include<stdio.h>


void main()
{
	int n, i, fact = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=1; i <= n; i++)
		fact = fact * i;
	printf("%d! = %d\n", n, fact);
}

