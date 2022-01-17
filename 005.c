#include<stdio.h>


int main()
{
	int n, a[20], avg_int = 0, i;
	float avg_exact = 0;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	printf("Enter the integers: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		avg_int += a[i];
		avg_exact += a[i];
	}
	avg_int = avg_int / n;
	avg_exact = (1.0 * avg_exact) / n;
	printf("Integer average = %d & Exact average = %.2f\n", avg_int, avg_exact);
}

