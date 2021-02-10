/*Reverse an array with an auxiliary array.*/
#include<stdio.h>

int main()
{
	int n, i;
	
	printf ("\nEnter number of elements in array:");
	scanf ("%d", &n);
	
	int arr[n], aux[n];
	for(i=0 ; i<n ; i++)			//loop to input array
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nReversed array is: ");
	for(i=0 ; i<n ; i++)			//loop to make reversed auxiliary array
	{
		aux[i] = arr [n-1 -i];
		printf("%d ",aux[i]);
	}
	
	printf("\n");
	
return 0;
}
