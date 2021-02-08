/*Convert  temperature  given  in  Fahrenheit  to  Centigrade  and  Centigrade  to  Fahrenheit. Hint: C=5/9(F-32)).*/

#include<stdio.h>
int main(){

	float f,c;
	
//centigrade to farenheit
	printf("\nEnter temperature in Centigrade: ");
	scanf("%f", &c);
	
	f = (c*9/5) + 32;
	printf("\n%.2f Centigrade = %.2f Fahrenheit\n", c, f);
	
//farenheit to centigrade
	printf("\nEnter temperature in Centigrade: ");
	scanf("%f", &f);
	
	c = (f-32) * 5/9;
	printf("\n%.2f Fahrenheit = %.2f Centigrade\n", f, c);
	
return 0;
}

