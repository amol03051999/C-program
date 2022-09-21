#include<stdio.h>
#include<math.h>
main()
{
	int i=0;
	float sq;
	do
	{
		sq=i*i;
		printf("\n %d square is =%0.2f",i,sq);
		i++;
	}
		while(i<=10);
}
