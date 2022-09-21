#include<stdio.h>
main()
{
//	enter basic salary from user if bs>=10000 then hra will be 10% of bs.ta will be 5% of  bs.
//	bonus=2400 otherwise hra will be 5% of bs.ta  will be 1000.bonus=1500 then calculate netsal
//	of the employee netsal=bs+hra+ta+bonus
//	
//      	bs     hra     ta     bonus    netsal
//	   2400   2400    1200
	   int bs,hra,ta,bonus,netsal;
	   printf("\nn enter basic salary=");
	   scanf("%d",&bs);
	   if(bs>=10000)
	   {
	   	hra=bs*10/100;
	   	ta=bs*5/100;
	   	bonus=2400;
	   }
	   else
	   {
	   	hra=bs*5/100;
	   	ta=1000;
	   	bonus=1500;
	   }
	   netsal=bs+hra+ta+bonus;
	   printf("netsal=%d",netsal);
	   printf("\n bs\thra\tta\tbonus\tnetsal");
	   printf("\n %d\t%d\t%d\t%d\t%d",bs,hra,ta,bonus,netsal);
}
