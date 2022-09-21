#include<stdio.h>
//with return type without parameter
int greater();
main()
{
	int ans;
	ans=greater();
	printf("\n greater number=%d",ans);
}
int greater()
{
	int a,b,c;
	printf("\n enter number a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	
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

