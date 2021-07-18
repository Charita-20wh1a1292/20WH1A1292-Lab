#include<stdio.h>
int main()
{
	int n,i,a[10],max=0;
	printf("enter number of array elements\n");
	scanf("%d",&n);
	printf("enter numbrers of an array\n");
	for(i=0;i<n;i++)
	{
		
	 	scanf("%d",&a[i]);
	 	max = max<a[i]?a[i]:max;
	
    }
     printf("the largest element of array =%d",max);
	 return 0; 
	  }  
	  
	 

