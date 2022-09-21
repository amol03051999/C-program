#include<stdio.h>
main()
{
	int bs,hra,da,gross_salary;
	printf("\n enter basic salary of the employee=");
	scanf("%d",&bs);
	if(bs<=1000)
	{
		hra=bs*20/100;
		da=80*100;
	}
	else if(bs<=2000)
	{
		hra=bs*25/100;
		da=90/100;
	}
	else
	{
		hra=bs*30/100;
		da=bs*95/100;
	}
	gross_salary=bs+hra+da;
	printf("\n gross saalry of the employee=%d",gross_salary);
}
