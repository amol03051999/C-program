#include<stdio.h>
main()
{   //factorial number
    int i,fact=1,n;
    printf("\n enter a  number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	fact=fact*i;
    	printf("\n factorial=%d",i,fact);
	}
}
