#include<stdio.h>
main()
{
	int dd,mm,yy;
	printf("\n enter dd/mm/yy format=");
	scanf("%d/%d/%d",&dd,&mm,&yy);
	if(yy>=1900&&yy<=9999)
	{
		if(mm>=1&&mm<=12)
		{
			if((dd>=1&&dd<=31)&&(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
			{
				printf("\n date is valid");
			}
			else if((dd>=1&&dd<=30)&&(mm==4||mm==6||mm==9||mm==11))
			{
				printf("\n date is valid");
			}
			else if((dd>=1&&dd<=28)&&(mm==2))
			{
					printf("\n date is valid");	
			}
			else if(dd==29&&mm==2&&(yy%400==0||(yy%4==0&&yy%100!=0)))
			{
					printf("\n date is valid");
			}
			else
			{
					printf("\n date not is valid");
			}
		}
		else
		{
				printf("\n month is not valid");
		}
	}
	else
	{
			printf("\n year is not valid");
	}
}
