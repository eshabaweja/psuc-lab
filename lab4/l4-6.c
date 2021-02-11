/*Take 3 students marks of 5 subjects. Print total marks of each students and average marks of each subject.*/

#include<stdio.h>

int main()
{
	int stu=3, sub=5, total;
	float avg = 0;
	
	int arr[stu][sub];
	for(stu=0 ; stu<3 ; stu++)		//nested loop to input array
	{
		total=0;
			
		for(sub=0; sub<5; sub++)
		{
			printf("\nEnter marks of student %d in Subject %d: ",stu+1, sub+1);
			scanf("%d",&arr[stu][sub]);
			total = total + arr[stu][sub]; //and to calculate total of each student
		}
		printf("\nTotal marks of student %d are %d.\n\n",stu+1,total);
	}
	
	
	for(sub=0; sub<5; sub++)
	{
		avg=0;
		for (stu=0; stu<3; stu++)
			avg = avg + arr[stu][sub]; //sum of marks of all students in given subject
		avg = avg/3;		//actual average by dividing by number of students
		
		printf("\nAverage marks of subject %d are %.2f.\n",sub+1,avg);
	}
return 0;
}
