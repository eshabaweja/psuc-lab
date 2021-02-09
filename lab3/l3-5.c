/*Convert the binary number to decimal.Ex: 1101 = 1*2^3+1 * 2^2+ 0 * 2^1+ 1* 2^0=13*/

#include<stdio.h>
#include<math.h>
int main()
{
	int b, i=0, rem, dec=0;
	
	printf("Enter binary number: ");
	scanf("%d",&b);
	
	while (b!=0)
	{
		rem = b%10;
		b = b/10;
		dec = dec+ (rem*pow(2,i));
		i=i+1; 
	}
	
	printf("\nRequired decimal number is %d.\n",dec);

return 0;
}
