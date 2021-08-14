#include<stdio.h>
struct BOOK
{
	char book[20],author[20];
	int pages,price;
};
int main()
{
	struct BOOK details;
	struct BOOK *ptr;
	ptr=&details;
	printf("Enter name of book:\n");
	scanf("%s",ptr->book);
	printf("Enter name of author:\n");
	scanf("%s",ptr->author);
	printf("Enter no.of pages:\n");
	scanf("%d",&ptr->pages);
	printf("Enter price:\n");
	scanf("%d",&ptr->price);
	printf("\nBOOK DETAILS:\n");
	printf("NAME OF THE BOOK:%s\n",ptr->book);
	printf("NAME OF THE AUTHOR:%s\n",ptr->author);
	printf("No.of Pages:%d\n",ptr->pages);
	printf("PRICE=%d\n",ptr->price);
	
}
