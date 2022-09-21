#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter a & b");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d and b=%d",a,b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\n after swapping a=%d and b=%d",a,b);
	
}
