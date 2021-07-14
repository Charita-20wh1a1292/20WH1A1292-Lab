#include<stdio.h>
int main()
{
	int n1,n2;
	int product = 0;
	printf("enter 2 numbers\n");
	scanf("%d%d",&n1,&n2);
	while(n2!=0)
	{
		product += n1;
		n2--;
	}
	printf("product = %d\n",product);
	return 0;
}
