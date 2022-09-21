#include<stdio.h>
main()
{
	int a,b,temp;;
	printf("\n enter a & b");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping a=%d and b=%d",a,b);
}
