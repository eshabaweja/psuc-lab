/*Interchange values of two variables using a third variable.*/
#include <stdio.h>
int main()
{
	int x,y,temp;
	
	printf("Enter integer x:");
	scanf("%d",&x);
	
	printf("Enter integer y:");
	scanf("%d",&y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("On interchanging, x is %d and y is %d.\n",x,y);

return 0;
}
