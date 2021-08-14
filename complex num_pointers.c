#include<stdio.h>
struct complex
{
	int real,imaginary;
};
int main()
{
	struct complex number;
	struct complex *ptr;
	ptr=&number;
	printf("Enter real part:\n");
	scanf("%d",&ptr->real);
	printf("Enter imaginary part:\n");
	scanf("%d",&ptr->imaginary);
	printf("\n Complex Number=%d+%di",ptr->real,ptr->imaginary);
	
}
