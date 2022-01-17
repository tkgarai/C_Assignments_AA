#include<stdio.h>



void main()
{
	int a, b, i;
	printf("Enter the two integers: ");
	scanf("%d %d", &a, &b);
	if(a == 0)
		printf("gcd(%d, %d) = %d\n", a, b, b);
	else if(b == 0)
		printf("gcd(%d, %d) = %d\n", a, b, a);
	else
		for(i = (a < b) ? a : b; i > 0; i--)
			if(a % i == 0 && b % i == 0)
			{
				printf("gcd(%d, %d) = %d\n", a, b, i);
				break;
			}	
}
