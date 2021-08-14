#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=10,b=20;
	printf("\n before swapping the values are a = %d and b = %d\n",a,b);
	swap(&a,&b);
	printf("\n after swapping the values are a = %d and b = %d\n",a,b);
	
}
void swap(int*p,int*q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q =  temp;
}
