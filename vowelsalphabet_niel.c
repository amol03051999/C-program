#include<stdio.h>
main()
{
//	to check vowels or consonent
//	case sensitive or incase seensitive
	
	char ch;
	printf("\n enter character=");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			printf("\n it is a vowels");
		}
		else
		{
			printf("\n it is aconsonent");
		}
	}
	else
	{
		printf("\n neither it is vowels nor consonent");
	}
	
}
