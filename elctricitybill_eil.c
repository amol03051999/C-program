#include<stdio.h>
main()
{
	int unit;
	float surcharge,amount,total_amount;
	printf("\n enter total units consumed=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if(unit<=150)
	{
		amount=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		amount=100+(unit-150)*1.20;
	}
	else
	{
		amount=220+(unit-50)*1.50;
	}
	surcharge=amount*0.20;
	total_amount=surcharge+amount;
	printf("\n your electricity bill=%0.2f",total_amount);
}
