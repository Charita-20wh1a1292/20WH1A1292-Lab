#include<stdio.h>
#include<math.h>
long decimal_binary(int num)
{
	long bin=0;
	int rem,temp;
	while(num!=0)
	{
		rem = num%2;
		num = num/2;
		bin = bin + rem*temp;
		temp = temp*10;
	}
	return bin;
}
int main()
{
	int num;
	printf("enter a decimal number\n");
	scanf("%d",&num);
	printf("binary equivalent of given number is %ld",decimal_binary(num));
	return 0;
}
