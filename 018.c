#include<stdio.h>



void main()
{
	int N, i;
	printf("Enter N: ");
	scanf("%d", &N);
	printf("All positive factors of %d are: ", N);
	for(i = 1; i <= N; i++)
		if(N % i == 0)
			printf("%d\t", i);
	printf("\n");
}
