#include<stdio.h>
int main()
{
	int i,n;
	float a[100],sum=0,avg;
	printf("enter no of elements in an array\n");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0;i<n;i++)
	 {
		scanf("%f",&a[i]);
		sum = sum + a[i];
	 }
	avg = sum / n;
	printf(" sum =%f \n avg =%f",sum,avg);
	return 0;
}
