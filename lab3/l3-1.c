/*Write a program to print the sum of N natural numbers.*/
#include <stdio.h>
int main()
{
	int i, sum = 0 , N;
	printf("Enter N:");
	scanf("%d",&N);
	
	for (i=1; i<=N; i++)
	{
		sum = sum + i;
	}
	
	printf("\nSum of first %d natural numbers is %d.\n",N,sum);
return 0;
}
