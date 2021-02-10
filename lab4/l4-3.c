/*Find  the  number  of  positive numbers, negative numbers,  odd numbers,even numbers and number of 0 of an array.*/
#include<stdio.h>

int main()
{
	int n, pos_num, neg_num, odd_num, even_num, zeros, i;
	pos_num = neg_num = odd_num = even_num = zeros = 0;
	printf ("\nEnter number of elements in array:");
	scanf ("%d", &n);
	
	int arr[n];
	for(i=0 ; i<n ; i++)
	{		//loop to input array
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0 ; i<n ; i++)
	{
		if (arr[i] >0)			//counting positives
			pos_num = pos_num +1;
			
		else if (arr[i] <0)		//counting negatives
			neg_num = neg_num +1;
			
		else 				//counting zeros
			zeros = zeros +1;
			
		if (arr[i] %2 == 0)		//counting evens
			even_num = even_num +1;
			
		else				//counting odds
			odd_num = odd_num +1;
	}
	
	printf("The number of positive numbers is %d.\nThe number of negative numbers is %d.\nThe number of odd numbers is %d.\nThe number of even numbers is %d.\nThe number of zeros is %d.\n",pos_num, neg_num, odd_num, even_num, zeros);
	
return 0;
}
	
