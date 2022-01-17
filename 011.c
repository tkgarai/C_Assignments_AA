#include<stdio.h>


void main()
{
	int a, b, i, j, lcm;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	j = (a > b)? a:b;
	for(i = j; ; i += j)
		if(i % a == 0 && i % b == 0)
		{
			
			lcm = i;
			break;
		}
	printf("lcm(%d, %d) = %d\n", a, b, i);
}
