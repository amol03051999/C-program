#include<stdio.h>
main()
{
	int r,h;
	float pi=3.14,volume;
	printf("\n enter r");
	scanf("%d",&r);
	printf("\n enter h");
	scanf("%d",&h);
	
	volume=pi*r*r*h;
	printf("\n volume of cone=%f",volume);
}
