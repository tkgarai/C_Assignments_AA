#include<stdio.h>


int main()
{
	int l1, l2, l3;
	printf("Enter the lengths of three line segment: ");
	scanf("%d %d %d", &l1, &l2 , &l3);
	if((l1 + l2 > l3) && (l2 + l3 > l1) && (l1 + l3 > l2))
	{
		printf("They form a triangle.\n");
		if(l1 == l2 == l3)
			printf("The triangle is EQUILATERAL.\n");
		else
			printf("The triangle is NOT EQUILATERAL.\n");
		if((l1 == l2) || (l2 == l3) || (l1 == l3))
			printf("The triangle is ISOSCALES.\n");
		else
			printf("The triangle is  NOT ISOSCALES.\n");
	}
	else
		printf("They do not form a triangle.\n");
}
