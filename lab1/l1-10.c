/*Interchange values of two variables without using a third variable.*/
#include <stdio.h>
int main()
{
	int x,y;

	printf("Enter integer x:");
	scanf("%d",&x);

	printf("Enter integer y:");
	scanf("%d",&y);

	x = x + y;
	y = x - y; //initial x+y -y i.e. intial x
	x = x - y; //initial x+y -new y i.e. initial x

	printf("On interchanging, x is %d and y is %d.\n",x,y);

return 0;
}
