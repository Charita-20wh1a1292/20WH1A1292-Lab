#include <stdio.h>
int main() 
   {
    int r, c, a[10][10], b[10][10], sum[10][10], i, j;
    printf("Enter number of rows\n ");
    scanf("%d", &r);
    printf("Enter number of columns\n");
    scanf("%d", &c);

  	printf("Enter elements of 1st matrix\n");
  	for (i=0; i<r;i++)
    	for (j=0;j<c;j++) 
		{	
      		scanf("%d", &a[i][j]);
    	}

  	printf("Enter elements of 2nd matrix\n");
  	for (i=0;i<r;i++)
    	for (j=0;j<c;j++)
		 {
      		scanf("%d", &b[i][j]);
         }

  // adding two matrices
  for (i=0;i<r;i++)
    for (j=0;j<c;j++)
	 {
      	sum[i][j] = a[i][j] + b[i][j];
     }

  // printing the result
  printf("Sum of two matrices \n");
  for (i=0;i<r;i++)
    {
	 for (j=0;j<c;j++) 
	 {
       printf("%d\t",sum[i][j]);  
     }
     printf("\n");
    }

  return 0;
}
