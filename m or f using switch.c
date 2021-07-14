#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character\n");
	scanf("%c",&c);
	switch(c)
	{
	case 'M':printf("Gender = Male");
	         break;
	case 'F':printf("Gender = Female");
	         break;
			         }
	return 0;		         
}
