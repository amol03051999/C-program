#include<stdio.h>
main()
{
	int a,b,result;
	char ch;
	printf("enter an operator:");
	scanf("%c",&ch);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
		case'+':
			
			result=a+b;
			printf("result=%d",result);
			break;
		
		case'-':
			result=a-b;
			printf("result=%d",result);
			break;
			
		case'*':
			result=a*b;
			printf("result=%d",result);
			break;
			
		case'/':
			result=a/b;
			printf("result=%d",result);
			break;
			
		default:
			printf("invalid input");
	}
}
