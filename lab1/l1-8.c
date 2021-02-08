/*Evaluate the area of the circle Area = Pi * R^2*/

#include<stdio.h>
int main()
{
	float pi=3.1415, r, area;
	printf("Enter radius: ");
	scanf("%f",&r);
	area = pi*r*r;
	printf("\nThe area is %.2f square units.\n",area);

return 0;
}
