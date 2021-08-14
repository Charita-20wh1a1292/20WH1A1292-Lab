#include<stdio.h>
int main()
{
	//x^n
	int x,n,i,power=1;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter Power:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		power=power*x;	
	}
	printf("%d^%d=%d",x,n,power);
}
