/*Write a program to take N as input print the odd numbers in descending order.*/
#include<stdio.h>
int main()
{
	int i,N;
	printf("Enter number:");
	scanf("%d",&N);
	
	if (N%2 == 1)
	for(i=N ; i>0 ; i=i-2)
		printf("%d, ",i);
		
	else
	for(i=N-1 ; i>0 ; i=i-2)
		printf("%d, ",i);
		
	printf("\n");
return 0;
}
