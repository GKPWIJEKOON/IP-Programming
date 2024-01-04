#include<stdio.h>

int main()
{
	int marks ;
	
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	if (marks>=35)
	{
		if(marks<=100)
		{
			printf("pass\n");
		}
		else
		{
			printf("invalid marks\n");
		}
	}    
	else
	{
		if(marks<=0)
		{
			printf("fail\n");
		}
		else
		{
			print("invalid marks  ");
		}
	}
	
	printf("keep it up");
	
	return 0;
}
	
	
