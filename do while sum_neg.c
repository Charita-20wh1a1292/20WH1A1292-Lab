#include<stdio.h>
int main()
{
	int num[10],i=0,sum=0;
	printf("Enter numbers\n");
	do
	{
		scanf("%d",&num[i]);
		if(num[i]<0)
		{
			sum=sum+num[i];	
		}
		i++;
	}
	while(i<10);
	printf("sum=%d",sum);
}
