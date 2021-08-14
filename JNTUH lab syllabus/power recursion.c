#include<stdio.h>
int power(int,int);
int main()
{
	//x^n
	int x,n;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter Power:\n");
	scanf("%d",&n);
	printf("%d^%d=%d",x,n,power(x,n));
}
int power(int x,int n)
{
	if(n==1)
	return x;
	else
	return x*power(x,n-1);
}
