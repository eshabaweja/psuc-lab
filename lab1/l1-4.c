//Find  the  sum  of  the  digits  of  a  four-digit  number without loop
#include <stdio.h>
int main(){
	
	int num,sum=0;

	printf("\nEnter number:");
	scanf("%d",&num);
  
  
  if(num>=1000 && num<=9999) //checking that it is a 4-digit number
  {		
	sum = num%10; //adding units' place
	num = num/10; //quotient
	
	sum = sum + (num%10); //adding tens' place
	num = num/10; //quotient
	
	sum = sum + (num%10); //adding hundreds' place
	num = num/10; //quotient
	
	sum = sum + (num%10); //adding thousands' place
	
	printf("\nSum of all digits is: %d\n",sum);
	
  }
  else
  	printf("\n Invalid input.\n");	
	
return 0;
}
