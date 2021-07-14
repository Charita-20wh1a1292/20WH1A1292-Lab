#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,count=0;
	printf("Enter 5 numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	if(n1>0)
	{
		printf("Positive Number\n");
		count=count+1;
	}
	else
	printf("Negative number\n");
	if(n2>0)
	{
		printf("Positive Number\n");
		count=count+1;
	}
	else
	printf("Negative number\n");
	if(n3>0)
	{
		printf("Positive Number\n");
		count=count+1;
	}
	else
	printf("Negative number\n");
	if(n4>0)
	{
		printf("Positive Number\n");
		count=count+1;
	}
	else
	printf("Negative number\n");
	if(n5>0)
	{
		printf("Positive Number\n");
		count=count+1;
	}
	else
	printf("Negative number\n");
	printf("no.of positive numbers=%d\n",count);
	printf("no.of negative numbers=%d",5-count);
	return 0;
	
}
