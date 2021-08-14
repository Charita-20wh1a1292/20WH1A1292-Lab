#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("Factorial of %d=%d",n,fact(n));
}
int fact(n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}

