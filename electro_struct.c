#include<stdio.h>
struct electronic
{
	char name[20];
	int price;
	float qty;
};
main()
{
	struct electronic e[20];
	int i,n;
	printf("\n enter no. of records=");
	scanf("%d",&n);
	
	printf("\n enter name,price,qty=\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%d%f",&e[i].name,&e[i].price,&e[i].qty);
	}
	printf("\n name\t\tprice\tqty\n");
	for(i=0;i<n;i++)
	{
		printf("\n %s\t%d\t%.2f",e[i].name,e[i].price,e[i].qty);
	}
}
