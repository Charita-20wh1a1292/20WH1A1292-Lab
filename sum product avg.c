#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("sum=%d\n",n1+n2+n3);
	printf("product=%d\n",n1*n2*n3);
	printf("average=%f\n",(n1+n2+n3)/3.0);
	return 0;
}
