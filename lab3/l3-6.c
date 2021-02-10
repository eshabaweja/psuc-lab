/*Reverse a given number. Ex:  1234 reverse=4*10^3+3 * 10^2+ 2 * 10^1+ 1 * 10^0=4321*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num,temp, rev=0, i=0, count=0;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	temp = num;
	
	while (temp != 0)	//counting number of digits in given number
		{
		temp = temp/10;
		count = count+1;
		}
		
	while (i<count)
		{
		rev = rev + (num%10)*pow(10,count-i-1);
		printf("%d\n",rev);
		num = num/10;
		printf("%d\n",num);
		i=i+1;
		printf("%d\n",count-i-1);

		}	

	printf("\nReverse is %d.\n",rev);
return 0;
}
