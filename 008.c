#include<stdio.h>


void main()
{
	int n, r, nPr = 1, i;
	printf("Enter n & r: ");
	scanf("%d %d", &n, &r);
	if(n >= r)
	{
		for(i =  n - r + 1; i <= n; i++)
			nPr = nPr * i;
		printf("%dP%d = %d\n", n, r, nPr);
	}
	else
		printf("MATH ERROR!\n");
}
