#include<stdio.h>
main()
{
//	to check result
//	phy,che,bio,math,comp subject marks
//	grade A:>=90&&<=100
//	grade B:>=80&&<=90
//	grade C:>=70&&<=80		
//	grade D:>=60&&<=70
//	grade E:>=40&&<=60
//	grade F:remain
	
	int phy,che,bio,math,comp,sum,avg;
	printf("\n enter 5 subject marks");
	scanf("%d%d%d%d%d",&phy,&che,&bio,&math,&comp);
	sum=phy+che+bio+math+comp;
	printf("\n sum=%d",sum);
	avg=sum*100/500;
	printf("\n avg=%d",avg);
	if(avg>=90&&avg<100)
	{
		printf("\n garde'A'");
	}
	else if(avg>=80&&avg<90)
	{
		printf("\n ggrade'B'");
	}
	else if (avg>=70&&avg<80)
	{
		printf("\n grade'C'");
	}
	else if(avg>=60&&avg<70)
	{
		printf("\n grade'D'");
	}
	else if(avg>=40&&avg<60)
	{
		printf("\n grade'E'");
	}
	else
	{
		printf("\n grade'F'");
	}
}
