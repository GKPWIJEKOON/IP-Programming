#include <stdio.h>
int main(void)
{
	int numArr[8], i,num;
	printf("Enter numbers: ");
	for(i=0;i<8;i++)
	{
		scanf("%d", &numArr[i]);
	}
	printf("\nEnter number of places to be shifted: ");
	scanf("%d", &num);
	for(i=num;i<8;i++)
	{
		printf("%d ", numArr[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d ", numArr[i]);
	}
	
}
