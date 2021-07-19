#include<stdio.h>
struct complex
{
	int real;
	int imaginary;		
}c;
int main()
{
	struct complex c1;
	printf("enter real part:");
	scanf("%d",&c.real);
	printf("enter imaginary part:");
	scanf("%d",&c.imaginary);
	printf("the complex number is : %d + i%d",c.real,c.imaginary);
}
