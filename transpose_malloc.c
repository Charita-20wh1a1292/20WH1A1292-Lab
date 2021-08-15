#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *matrix,i,j,r,c;
	printf("Enter no.of rows:\n");
	scanf("%d",&r);
	printf("Enter no.of columns:\n");
	scanf("%d",&c);
	matrix=(int*)malloc(sizeof(matrix));
	printf("Enter elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",matrix+(i*c+j)*sizeof(int));
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(matrix+(i*c+j)*sizeof(int)));
		}
		printf("\n");
	}
	printf("Transpose of the matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",*(matrix+(j*c+i)*sizeof(int)));
		}
		printf("\n");
	}
}
	
	
	
