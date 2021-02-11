/*Find whether given matrix is symmetric or not.*/
#include<stdio.h>

int main()
{
	int i, j, n, c=0;
	printf ("Enter size n of array:");
	scanf("%d",&n);
	int arr[n][n];
	for(i=0 ; i<n; i++)		//nested loop to input array
	{
		for(j=0; j<n; j++)
		{
			printf("\nEnter element of row %d column %d : ",i+1, j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0 ; i<n; i++)		//nested loop to traverse array
	{
		for(j=0; j<n; j++)
		{
			if(arr[i][j] == arr[j][i])
			c=c+1;
			
			else
			{
			printf("\nNot symmetric.\n");
			i = n;	//to break out of nested loops
			}
		}
	}
	
	if (c == n*n)
		printf("\nSymmetric.\n");
		
return 0;
}
