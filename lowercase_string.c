#include<stdio.h>
main()
{
	char str[100];
	int i;
	
	printf("\n enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{if (str[i]>='A'&&str[i]<='Z'){
		str[i]=str[i]+(' ');
	}
}
	printf("\n string in lower case is =\%s",str);
}
