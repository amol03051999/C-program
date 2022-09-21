#include<stdio.h>
main()
{
	int p,h,r;
	float interest;
	printf("\n enter p");
	scanf("%d",&p);
	printf("\n enter h");
	scanf("%d",&h);
	printf("\n enter r");
	scanf("%d",&r);
	
	interest=p*h*r/100;
	printf("\n interest=%f",interest);
}
