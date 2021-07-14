#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,esum=0,osum=0;
	printf("Enter 5 numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	if(n1%2==0)
		esum=esum+n1;	
	else
		osum=osum+n1;
	if(n2%2==0)
		esum=esum+n2;	
	else
		osum=osum+n2;
	if(n3%2==0)
		esum=esum+n3;	
	else
		osum=osum+n3;
	if(n4%2==0)
		esum=esum+n4;	
	else
		osum=osum+n4;
	if(n5%2==0)
		esum=esum+n5;	
	else
		osum=osum+n5;
	printf("Sum of even integers=%d\n",esum);
	printf("Sum of odd integers=%d",osum);
	return 0;
	
}
