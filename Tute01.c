/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
//start main function
{
//veriable
  	int number1,number2,total;
	float average;
	
	printf("Enter marks of Suject 01 :-");
	scanf("%d",&number1);
	
	printf("Enter marks of Suject 02 :-");
	scanf("%d",&number2);
	
	total=number1+number2;
	
	average=total/2;
	
	printf("\nAvarage of Marks %.1f",average);
  return 0;
}
//end of main function
