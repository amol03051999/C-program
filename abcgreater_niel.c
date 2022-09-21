#include<stdio.h>
int main()
{
//	compare a,b greater than c
	int a,b,c;
	printf("\n enter a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is greater");
		}
		else
		{
			printf("\n c is greater");
		}	
	}
	if(b>c)
	
	{
		printf("\n b is greater");
	}
	else
	{
		printf("\n c is greater");
	}
   return 0;
}
