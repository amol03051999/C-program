#include<stdio.h>
main()
{   //factorial number
    int i=0,fact=1,n;
    printf("\n enter a  number:");
    scanf("%d",&n);
    while(i<=n)
    {
    	fact=fact*i;
    	printf("\n factorial=%d",i,fact);
    	i++;
	}
}
