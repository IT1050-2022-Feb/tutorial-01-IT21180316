/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main (void)
//start main function
{
	//declare veriables
	int number,i,sum=0;
	
	printf("Enter number:-");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		
		sum=sum+i; //calculate the Sum
	}
	
	printf("\nSum of the Numbers: %d",sum);
	
	return 0;
}
//end function