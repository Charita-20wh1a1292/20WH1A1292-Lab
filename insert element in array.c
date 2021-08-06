#include <stdio.h>
int main()
{
   int array[10], position, i, n, value;
   printf("enter number of elements in array\n");
   scanf("%d",&n);
   printf("enter the position to insert an element\n");
   scanf("%d",&position);
   printf("enter the element to be inserted\n", n);
   scanf("%d",&value);
   printf("enter array elements\n");
   for (i=0;i<n;i++)
      scanf("%d", &array[i]);
 	for (i=n-1;i>=position-1;i--)
      array[i+1] = array[i];
      array[position]=value;
   printf("Resultant array is\n");
 	for (i=0;i<=n;i++)
      printf("%d\n", array[i]);
 
   return 0;
}
