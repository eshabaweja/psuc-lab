//3.Convert the time in seconds to hours, minutes and seconds. (1 hr =3600 sec).

#include <stdio.h>
int main()
{
	int t_sec,t_min,hr,min,sec;
	printf("\nInput time in seconds:\n");
	scanf("%d",&t_sec);
	
	
	sec = t_sec%60;	/*a minute has 60 seconds; the remainder would be the time in seconds*/
	t_min = t_sec/60;	/*converting the rest of the time to minutes*/
	min = t_min%60;	/*one hour has sixty minutes so only remaining minutes would be counted*/
	hr = t_min/60;		/*converting the rest of the time to hours*/
	
	printf("\nThe time is %d hours, %d minutes, and %d seconds.",hr,min,sec);
	
	return 0;
}
