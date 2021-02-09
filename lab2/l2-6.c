/*Program  to  calculate an area  of a circle, a rectangle or a triangle depending on user’s choice.*/
#include <stdio.h>

int main ()
{
      int choice;
      float pi=3.1415,r,l,w,b,h,area;
      
      printf("Input 1 for area of circle\nInput 2 for area of rectangle\nInput 3 for area of triangle\n");
 
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                  {printf("Enter radius of the circle: ");
                  scanf("%f ",&r);
                  printf("Area of circle= %.2f\n",pi*r*r);
                  break;}
                 
            case 2:
                  {printf("Enter length and width of the rectangle: ");
                  scanf("%f%f ",&l,&w);
                  printf("Area of rectangle= %.2f\n",l*w);
                  break;}
                  
            case 3:
                  {printf("Enter the base and hight of the triangle: ");
                  scanf("%f %f",&b,&h);
                  printf("Area of triangle= %.2f\n",0.5*b*h);
                  break;}
                  
            default:
                  {printf("invalid");
                  break;}
          }
          
return 0;
}
