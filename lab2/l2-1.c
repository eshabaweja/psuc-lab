/*Check whether the given number is odd or even.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	
	if (n%2 == 0)
		printf("\n%d is Even.\n",n);
		
	else
		printf("\n%d is Odd.\n",n);
return 0;
}
