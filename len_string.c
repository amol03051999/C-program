#include<stdio.h>
main()
{
	char str[100];
	int i, length=0;
	
	printf("\n enter a string:");
	gets(str);
	
	for (i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("\n length of string =%d\n",length);
}
