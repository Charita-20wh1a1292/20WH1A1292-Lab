#include<stdio.h>
int main()
{
	int c,a[]={12,45,34,23,56,2},i;
	printf("Array elements:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nMENU:\n");
	printf("1.Maximum of array elements\n");
	printf("2.Minimum of array elements\n");
	printf("3.Average of array elements\n");
	printf("4.Sum of array elements\n");
	printf("Enter choice:\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:maximum(a,6) ;break;
		case 2:minimum(a,6) ;break;
		case 3:average(a,6) ;break;
		case 4:addition(a,6) ;break;
		default: printf("select correct choice");break;
	}
		
}
int maximum(int a[],int size)
{
	int i,max;
	max=a[0];
	for(i=0;i<size;i++)
	{
	 	max = (max<a[i])?a[i]:max;
	
    }
	printf("Maximum of array elements=%d",max);	
}

int minimum(int b[],int size)
{
	int i,min;
	min=b[0];
	for(i=0;i<size;i++)
	{
		
		if(min>b[i])
		min=b[i];
	}
	printf("Minimum of array elements=%d",min);
}

int average(int a[],int size)
{
	int i,avg,sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
		avg=sum/size;
	}
	printf("Average of array elements=%d",avg);	
}

int addition(int a[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of array elements=%d",sum);	
}

