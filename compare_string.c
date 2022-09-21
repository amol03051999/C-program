#include<stdio.h>
main()
{
	char str1[100],str2[100];
	int i,c=0;
	
	printf("\n enter 1st string:");
	gets(str1);
	
	printf("\n enter 2nd string:");
	gets(str2);
	
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
	
	
	if (str1[i]!=str2[i])
         	c++;
		
	
}
	if(c==0)
	{
			printf("\n string are equal \n");
	}
	else 
	{
			printf("\n string are not equal \n");
	}
	
}


