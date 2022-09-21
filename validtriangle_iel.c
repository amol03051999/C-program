#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("\n enter three sides of triangle=");
	scanf("%d%d%d",&side1,&side2,&side3);
	if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1))
	{
		printf("\n this is a valid triangle");
	}
	else
	{
		printf("\n this is a valid triangle");
	}
}
