#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if((num&1)==1)
	printf("LSB of a number is set(1)");
	else
	printf("LSB of a number is notset(o)");
	return 0;
	
}
