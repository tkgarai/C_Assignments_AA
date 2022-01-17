#include<stdio.h>

int main()
{
	int a, b, i, j, sum = 0, count = 0;
	printf("Enter the interval: ");
	scanf("%d %d", &a, &b);
	printf("Perfect numbers in [%d, %d] are: ", a, b);
	for(j = a; j <= b; j++)
	{
		for(i = 1; i < j; i++)
			if(j % i == 0)
				sum += i;
		if(sum == j)
		{	
			printf("%d\t", j);
			count++;
		}
		sum = 0;
	}
	printf("\n");
	if(count == 0)
		printf("None\n");
}