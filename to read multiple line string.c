#include <stdio.h>
int main()
{
	int i;
	char c='@';
	char str[100];
	printf("enter a multiple line string and end it with #\n");
	for(i=0;c!='#';i++)
	  {
	  	c = getchar();
	  	str[i]=c;
	  }
	str[--i]='\0';
	printf("\nthe string is\n");
	puts(str);
	return 0;
	}
