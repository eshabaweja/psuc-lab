/*Array in ascending order by Bubble Sort. It works by repeatedly swapping the adjacent elements if they are in wrong order.*/
#include<stdio.h>
int main()
{
	int n, temp = 0, i, j;
	
	printf ("\nEnter number of elements in array:");
	scanf ("%d", &n);
	
	int arr[n];
	for(i=0 ; i<n ; i++)		//loop to input array
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	
	for(j=0 ; j<n ; j++)		//loop to compare for each element
	{
	for(i=0 ; i<n-1 ; i++)		//loop to sort array
	{
		if (arr[i] > arr [i+1])
		{
			temp = arr[i];	//interchanging adjacent wrongly ordered elements
			arr[i] = arr [i+1];
			arr[i+1] = temp;
		}
	}
	}

	printf("\nThe sorted array is:");
	for(i=0 ; i<n ; i++)		//loop to print sorted array
	{
		printf(" %d ",arr[i]);
	}
return 0;
}
