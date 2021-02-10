/*Find the largest and smallest element in an array.*/
#include<stdio.h>

int main()
{
	int n, large_num, small_num, i;
	
	printf ("\nEnter number of elements in array:");
	scanf ("%d", &n);
	
	int arr[n];
	for(i=0 ; i<n ; i++)			//loop to input array
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	large_num = small_num = arr[0];
	for(i=0 ; i<n ; i++)
	{
		if (arr[i] > large_num)	//largest number
			large_num = arr[i];
		
		if (arr[i] < small_num)	//smallest number
			small_num = arr[i];
	}
	
	printf("\nLargest number in array is %d, and smallest is %d.\n",large_num,small_num);
	
return 0;
}

