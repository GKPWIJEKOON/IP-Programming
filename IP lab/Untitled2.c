#include<stdio.h>
float calculateWeeklySalary(int grade , float hrsworked);
void printDetails(int grade , float hrsworked,float salary);
int main()
{
	int grade,hours;
	float salary;
	
	printf("Enter grade : ");
	scanf("%d",&grade);
	printf("Enter worked hours :");
	scanf("%d",&hours);
	
	salary=calculateWeeklySalary(grade , hours);
	printDetails(grade , hours ,salary);
	
	
	
	return 0;
}

float calculateWeeklySalary(int grade , float hrsworked)
{
	float salary;
	
	if(grade==1)
	{
		salary= hrsworked*100.00;
	}else if(grade==2)
	{
		salary= hrsworked*200.00;
	}else if(grade==3)
	{
		salary= hrsworked*300.00;
	}
	return salary;
}


void printDetails(int grade , float hrsworked,float salary)
{
	
	printf("salary is : %.2f",salary);
}

