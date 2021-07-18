#include<stdio.h>
int main()
{
	int i,a[5],min=100000;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
	{
	 	scanf("%d",&a[i]);
	 	min = min>a[i]?a[i]:min;
    }
     
	  printf("minimum number = %d",min);
	  return 0; 
}
