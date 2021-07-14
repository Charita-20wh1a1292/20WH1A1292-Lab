#include<stdio.h>
int main()
{
	int a,b,A,B;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	A = a+b-a;
	B = b+a-b;
	printf("after swapping =\n%d\n%d",A,B);
	return 0;
}
