//simple interest
#include<stdio.h>
int main()
{ 
	int p,t,r;
	float SI;
	printf("Enter p,t,r values\n");
	scanf("%d%d%d",&p,&t,&r);
	SI=(p*t*r)/100.0;
	printf("simple interest=%f",SI);
	return 0;
}
