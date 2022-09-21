#include<stdio.h>
main()
{   //factorial number
    int i=0,fact=1,n;
    printf("\n enter a  number:");
    scanf("%d",&n);
    
    do
    {
    	fact=fact*i;
    	printf("\n factorial=%d",i,fact);
    	i++;
	}while(i<=n);
}
