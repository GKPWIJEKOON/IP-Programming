//input the marks of two subjects and calculate the average mark
#include<stdio.h>
int main(void)
{
	int subject1,subject2;
	float average;
	
	printf("Enter the first subject mark:");
	scanf("%d",&subject1);
	
	printf("Enter the second subject mark:");
	scanf("%d",&subject2);
	
	
	average=(subject1+subject2)/2;
	
	printf("marks of two subject average mark is:%f",average);
}
