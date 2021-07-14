#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	{
		if(a>0)
		printf("the number is positive");
	}
	{
		if(a<=0)
		printf("the number is either zero or negative");
		
	}
	return 0;
	
}
