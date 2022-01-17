#include<stdio.h>

int main()
{
	int N, i, j, sum = 0, term = 0;
	printf("Enter N: ");
	scanf("%d", &N);
	for(i = 1; i<= N; i++)
	{
		printf("(");
		for(j = 1; j <= i; j++)
		{
			term += j;
			if(i == j)
				printf("%d",j);
			else
				printf("%d+",j);
		}
		sum += term;
		term = 0;
		if(i == N)
			printf(")");
		else
			printf(")+");
	}
	printf(" = %d\n", sum);
}
