#include<stdio.h>
int main()
{
	char str[500];
	int lines=0,chars=0,words=0,i;
	printf("enter a string that ends with $\n");
	scanf("%[^$]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n')
		{
			words++;
			lines++;
		}
		else 
		{
			if(str[i]==' '||str[i]=='\t')
			{
				words++;
				chars++;
			}
			else
			{
				chars++;
			}
		}
	}
		printf("no of characters = %d\n",chars);
		printf("no of words = %d\n",words);
		printf("no of lines = %d\n",lines);
}
 	


