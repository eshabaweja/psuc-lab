/*Converting  distance  in  mm  to  cm,  inch,  feet  (1  cm  =10mm,  1inch=2.5cm,  1  feet  =12   inches)*/

#include<stdio.h>
int main()
{
	int mm;
	printf("Enter distance in mm: ");
	scanf("%d", &mm);
	
	printf("\n%.4f in cm", mm/10.0);
	printf("\n%.4f in inch", mm/250.0);
	printf("\n%.4f in feet\n", mm/3000.0);
	
	

return 0;
}
