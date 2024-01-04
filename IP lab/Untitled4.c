#include <stdio.h>
struct book {
	int bookId;
	double price;
	int noOfPages;
	int editionNo;
} book1;
int main(){
	book1.bookId = 6495407;
	book1.price = 350.00;
	book1.noOfPages = 200;
	book1.editionNo = 8;
	printf("Book 1 book ID : %d\n", book1. bookId);
	printf("Book 1 price : %.2f\n", book1.price);
	printf("Book 1 no Of Pages : %d\n", book1.noOfPages);
	printf("Book 1 edition No : %d\n", book1.editionNo);
	
	return 0;
} 
