#include <stdio.h>
int main(void)
{
	int numArr[8],i,num;
	for (i = 0; i < 8; i++)
	{
	  printf("Enter the %d number: ", i + 1);
      scanf("%d", &numArr[i]);
	}
	 for (i = 0; i < 8; i++)
    {
        printf("%d ", numArr[i]);
    }
	printf("\n Enter positions to be shifted: ");
	scanf("%d", &num);
	
	for(i=6;i<8;i++)
	{
	 printf("%d \t", numArr[i]);	
	}
	
	for(i=0;i<6;i++)
	{
		
		printf("  %d \t", numArr[i]);
	}
	
}
