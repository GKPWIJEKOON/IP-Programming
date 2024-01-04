#include <stdio.h>
int main(void)
{
	int members;
	char prizes;
	
	printf("Enter the number of members:");
	scanf("%d",members);
	
	if(1=<members<3){
		prizes='wrist watch';
		printf("prizes is: %.2f",prizes)
	}
	else if(3=<members<5){
		prizes='umbrella';
		printf("prizes is: %.2f",prizes)
	}
	else if(5=<members<10){
		prizes='Bag';
		printf("prizes is: %.2f",prizes)
	}
	else if(10=<members<15){
		prizes='mini tv set';
		printf("prizes is: %.2f",prizes)
	}
	else if(15=<members){
		prizes='DVD player';
		printf("prizes is: %.2f",prizes)
	}
}

    
    return 0;
}
