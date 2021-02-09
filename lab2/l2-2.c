/*check whether it is a leap year.
Leap years usually occur every 4 years, but every 100th year is skipped unless it is divisible by 400.*/

#include<stdio.h>

int main()
{
    int y;
    
    printf("Enter year:");
    scanf("%d", &y);
    
	if (y % 4 == 0)
	{	
		if(y%100 == 0)
		{
		    if(y%400 == 0)
		      printf("\n%d is a leap year\n",y);
			
		    else
		      printf("\n%d is NOT a leap year\n",y);
		}
		else
		printf("\n%d is a leap year\n",y);
	    }

	else
	printf("\n%d is not a leap year\n",y);
    
return 0;
}
