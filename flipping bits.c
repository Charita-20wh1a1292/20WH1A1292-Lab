#include<stdio.h>
int main()
{
	int num,flip;
	printf("enter a number\n");
	scanf("%d",&num);
	flip = ~num;
	printf("after flipping the bits are changed to %d",flip);
	return 0;
}
