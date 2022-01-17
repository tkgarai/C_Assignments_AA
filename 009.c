#include<stdio.h>


void main()
{
	int n, r, nCr = 1, i;
	printf("Enter n & r: ");
	scanf("%d %d", &n, &r);
	if(n >= r)
	{
		for(i =  n - r + 1; i <= n; i++)
			nCr = nCr * i;
		for(i = 1; i <= r; i++)
			nCr = nCr / i;
		printf("%dC%d = %d\n", n, r, nCr);
	}
	else
		printf("MATH ERROR!\n");
}
