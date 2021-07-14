#include<stdio.h>
int main()
{ int a;
 printf("enter any number\n");
 scanf("%d",&a);
  if(a>0)
  {
  printf("%d is a positive number",a);
  }
  if(a<0)
  {
  	printf("%d is a negative number",a);
  }
  if(a==0)
  {
  	printf("%d the number given is zero",a);
  }
  return 0;
}
