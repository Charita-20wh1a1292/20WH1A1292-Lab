#include<stdio.h>
int main()
{
	int num,rem,digits=0;
	printf("enter a number\n");
	scanf("%d",&num);
	while(num>0)
	{
		num = num / 10;
		digits = digits + 1;
		
	}
	printf("number of digits in a number = %d",digits);
	return 0;
}
