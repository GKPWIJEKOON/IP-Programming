#include<stdio.h>
int main(void)
{
	int type,amount;
	float discount,finalAmount;
	
	printf("Customer Type : ");
	scanf(" %d",&type);
	
	printf("Bill Amount : Rs. ");
	scanf(" %d",&amount);
	
	if(type==1){
		if(amount<=2000)
			discount=amount*15/100;
		else if(amount>2000)
			discount=amount*25/100;
	}
	else if(type==2){
		if(amount>3000)
			discount=amount*15/100;
	}
	printf("Discount Amount : Rs. %.2f",discount);
	finalAmount=amount-discount;
	printf("\nFinal Bill Amount : Rs. %.2f",finalAmount);
	
	return 0;
}
