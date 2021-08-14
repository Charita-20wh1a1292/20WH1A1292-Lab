#include<stdio.h>
int main()
{
	int x,y;
	int *ptr;
	x = 10;
	ptr = &x;
	y = *ptr;
	printf("\n value of x is %d \n",x);
	printf("\n %d is stored at the address %u \n",x,&x);
	printf("\n %d is stored at the address %u \n",*&x,&x);
	printf("\n %d is stored at the address %u \n",*ptr,ptr);
	printf("\n %d is stored at the address %u \n",*ptr,&ptr);
	printf("\n %d is stored at the address %u \n",y,&y);			
}
