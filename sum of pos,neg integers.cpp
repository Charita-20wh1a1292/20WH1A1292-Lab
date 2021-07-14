#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,psum=0,nsum=0;
	printf("Enter 5 numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	if(n1>0)
		psum=psum+n1;	
	else
		nsum=nsum+n1;
	if(n2>0)
		psum=psum+n2;	
	else
		nsum=nsum+n2;
	if(n3>0)
		psum=psum+n3;	
	else
		nsum=nsum+n3;
	if(n4>0)
		psum=psum+n4;	
	else
		nsum=nsum+n4;
	if(n5>0)
		psum=psum+n5;	
	else
		nsum=nsum+n5;
	printf("Sum of positive integers=%d\n",psum);
	printf("Sum of negative integers=%d",nsum);
	return 0;
	
}
