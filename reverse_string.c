#include<stdio.h>
main()
{
	char str[100];
	int i, len;
	
	printf("\n enter a string:");
	gets(str);
	
	len=strlen(str);
	for (i=len-1;i>=0;i--)
	{
	
	printf("%c",str[i]);
}
}
