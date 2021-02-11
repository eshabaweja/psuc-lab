/*multiply 2 matrices*/
#include<stdio.h>

int main()
{
	int r1, r2, c1, c2, i, j, k;
	printf("Enter row and columns of 1st matrix:");
	scanf("%d %d", &r1, &c1);
	
	printf("Enter row and columns of 2nd matrix:");
	scanf("%d %d", &r2, &c2);	
	
	int arr1[r1][c1] , arr2[r2][c2] , prod[r1][c2];

	printf("\nEnter elements of arr1: ");
	for(i=0 ; i<r1 ; i++)		//nested loop to input array 1
	{
		for(j=0; j<c1; j++)
			scanf("%d",&arr1[i][j]);
	}
	
	printf("\nEnter elements of arr2: ");
	for(i=0 ; i<r2 ; i++)		//nested loop to input array 2
	{
		for(j=0; j<c2; j++)
			scanf("%d",&arr2[i][j]);
	}
	
	if (c1 != r2)
		printf("\nThese matrices cannot be multiplied.\n");
		
	else
		for (i=0; i< r1; i++)
		{	
			for (k=0; k< r2; k++)	
			{	prod[i][k] = 0;
				for (j=0; j<= c2; j++)  //multiplying matrices
				{	prod[i][k] = prod[i][k] + arr1[i][j] * arr2[j][k];
				}
			}
		} 
	
	printf("Product of given matrices is:\n");	
	for (i=0; i<r1; i++)
	{
		for(k=0; k<c2; k++)
			printf("%d\t",prod[i][k]);
		printf("\n");
	}
	
return 0;
}
