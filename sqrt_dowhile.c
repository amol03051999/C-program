#include<stdio.h>
#include<math.h>
main()
{
	int i=0;
	float sq;
    do
	{
		sq=sqrt(i);
		printf("\n %d square root=%0.2f",i,sq);
		i++;
	}
		while(i<=10);
}
