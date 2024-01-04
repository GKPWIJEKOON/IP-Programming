//Calculate the perimeter and area of a rectangle
#include <stdio.h>
 int main()
 {
 	
 	printf("Hello World\n");
 	int length,width;
 	int perimeter,area;
 	
 	printf("enter the legth:");
 	scanf("%d",&length);
 	printf("enter the width:");
 	scanf("%d",&width);
 	
 	perimeter=2*(length+width);
 	area=length*width;
 	
 	printf("perimeter of rectangle:%d\n",perimeter);
 	printf("area of rectangle:%d",area);
 	
 	
 	
 }
