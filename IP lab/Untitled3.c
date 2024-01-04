#include<stdio.h>
//2022
int main(void){
	
	FILE *cfPtr;
   cfPtr=fopen("answers.dat","w");
   
   if(cfPtr==NULL){
   	
   }
   
   char studentid[8];
   int answer1,answer2,answer3,answer4,i,c=0;
   
   	if(cfPtr == NULL){
		printf("Fail to create file\n");
		return -1;
	}
   
   for (i=0 ;i<5;i++){
   	
   	printf("\nEnter student id:");
   	scanf("%s",&studentid);
   	
   	printf("Enter answer  1  questions:");
   	scanf("%d",&answer1);
   	
   	printf("Enter answer  2  questions:");
   	scanf("%d",&answer2);
   	
   	printf("Enter answer  3  questions:");
   	scanf("%d",&answer3);
   	
   	printf("Enter answer of 4  questions:");
   	scanf("%d",&answer4);
   	
   		fprintf(cfPtr,"%s\t\t%d %d %d %d\n",studentid,answer1,answer2,answer3,answer4);
   }
   	fclose(cfPtr);
	
	
	cfPtr=fopen("answers.dat","r");
	
	printf("\n");
	
	printf("correct answer\n");
	
	while(!feof(cfPtr)){
		
		fscanf(cfPtr,"%s %d %d %d %d ",&studentid,&answer1,&answer2,&answer3,&answer4);
		
		 if(answer1==1){
		   c=c+1;
	    }
	    if(answer2==4){
	    	c=c+1;
		}
		if(answer3==2){
			c=c+1;
		}
		if(answer4==3){
			c=c+1;
		}
		  
         printf("%s\t%d\n",studentid,c);
         c=0;

	}
	fclose(cfPtr);
	
	
	
	
}
