#include<stdio.h>
int main()
{
	int x,y,sum;
	int *ptr1,*ptr2;
	ptr1=&x;
	ptr2=&y;
	printf("enter two numbers\n");
	scanf("%d%d",ptr1,ptr2);
	sum = *ptr1+*ptr2;
	printf("addition of two pointers = %d",sum);
	
}
