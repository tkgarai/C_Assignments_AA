#include<stdio.h>
#include <math.h>

int main()
{
	float a[3][2], l1, l2, l3, area, s;
	int i, j;
	printf("Enter the points A, B & C: ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 2; j++)
			scanf("%f", &a[i][j]);
	l1 =(((a[1][1] - a[0][1]) * (a[1][1] - a[0][1])) + ((a[1][0] - a[0][0]) * (a[1][0] - a[0][0])));
	l2 =(((a[2][1] - a[1][1]) * (a[2][1] - a[1][1])) + ((a[2][0] - a[1][0]) * (a[2][0] - a[1][0])));
	l3 =(((a[0][1] - a[2][1]) * (a[0][1] - a[2][1])) + ((a[0][0] - a[2][0]) * (a[0][0] - a[2][0])));
	if((l1 != (l2 + l3)) && (l2 != (l1 + l3)) && ( l3 != (l2 + l1)))//sqrt(l1) * sqrt(l1) != l1, so we are checking Pythagoras at first and then using sqrt
		printf("ABC is not a rightangle.\n");
	else
		printf("ABC is a rightangle.\n");
	l1 = sqrt(l1);
	l2 = sqrt(l2);
	l3 = sqrt(l3);
	s = (l1 + l2 + l3) / 2;
	area =sqrt(s * (s - l1) * (s - l2) * (s - l3));
	printf("The area of the triangle is: %f\n", area);
	return 0;
}
