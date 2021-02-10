/*Linear Search
Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
If x matches with an element, return the index.*/

#include<stdio.h>

int main()
{
	int n, num, i, j;
	
	printf ("\nEnter number of elements in array:");
	scanf ("%d", &n);
	
	int arr[n];
	for(i=0 ; i<n ; i++)
	{		//loop to input array
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf ("\nEnter number to be found:");
	scanf ("%d", &num);
	
	
	for(i=0 ; i<n ; i++)
	{		//loop to search number
		if (arr[i] == num)
			printf("\n%d is in the list at index %d.\n", arr[i],i);
			
		else
			continue;
	}
	
return 0;
}
	
