int main()
{
	char character1,character2;
	int j,lines,i;
	

	
	printf("Enter the character 1:");
	scanf(" %c",&character1);
	
	printf("Enter the character 2:");
	scanf(" %c",&character2);
	
	printf("Enter the lines:");
	scanf("%d",&lines);

	for(j=0;j<=lines;j++)
	{
		for(i=0;i<j;i++)
		{
	
	
			if(i%2!=0)
			{
				printf("%c",character2);
	
			}
			else if(i%2==0)
			{	
				printf("%c",character1);	
			}
				
			
		}

			printf("\n");
	}
	  return 0;
	
}
