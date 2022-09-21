#include<stdio.h>
//with return type with parameter
int greater(int a,int b,int c);
main()
{
	int a,b,c,ans;
	printf("\n enter number a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	ans=greater(a,b,c);
	printf("\n greater number=%d",ans);
}
int greater(int a,int b,int c)
{

	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is greater");
			return a;
		}
		else
		{
			printf("\n c is graeter");
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b is greater");
			return b;
		}
		else
		{
			printf("\n c is greater");
			return c;
		}
	}
}

