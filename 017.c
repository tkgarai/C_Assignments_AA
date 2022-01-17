#include<math.h>
#include<stdio.h>


void main()
{
	int N, k, i, sum = 0;
	printf("Enter N & k: ");
	scanf("%d %d", &N, &k);
	for(i = 1; i <= N; i++)
		sum += pow(i,k);
	printf("The sum is: %d\n", sum);
}
