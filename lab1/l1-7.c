#include<stdio.h>
#include<math.h>
//distance between 2 points

int main(){

	float x1,x2,y1,y2,z1,z2,d1,d2,d3,d;

	printf("\nEnter x coordinates:"); //x coords
	scanf("%f %f",&x1,&x2);

	printf("\nEnter y coordinates:"); //y coords
	scanf("%f %f",&y1,&y2);

	printf("\nEnter x coordinates:"); //z coords
	scanf("%f %f",&z1,&z2);

	d1 = x2-x1;
	d2 = y2-y1;
	d3 = z2-z1;

	d = sqrt((d1*d1) + (d2*d2) + (d3*d3));

	printf("Distance between those points is: %f\n",d);
	
return 0;
}
