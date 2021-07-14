#include<stdio.h>
int main()
{
	int number;
	float price,weight;
	printf("Enter no.of units\n");
	scanf("%d",&number);
	printf("Enter price and weight of a unit\n");
	scanf("%f%f",&price,&weight);
	printf(" Net weight=%f\n Total price=%f",weight*number,price*number);
	return 0;
}
