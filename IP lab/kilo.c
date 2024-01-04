#include<stdio.h>


float main(void)
{
	float kilometers, miles;

	printf("Enter the distance in kilometers: ");
	scanf( "%f",&kilometers );
	
	
	miles =(kilometers / (8.0/5.0));
	

	printf("Distance in miles : %.1f", miles);
	
	
	return 0;
}
