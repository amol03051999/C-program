#include<stdio.h>
main()
{
//	eligibility for admisssion
//	math>=65,phy>=60,che>=55
//	math+phy+che=180
	
	int m,p,c;
	printf("\n enter 3 subject marks");
	scanf("%d%d%d",&m,&p,&c);
	if(m>=65&&p>=60&&c>=55)
	{
		if(m+p+c>=180)
		{
			printf("\n eligible for aadmission");
		}
		else
		{
			printf("\n not eligible for admission");
		}
	}
	else
	{
		printf("\n not eligible for admission");
	}
}
