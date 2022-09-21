#include<stdio.h>
main()
{
	int a[10],size,i;
	int even_count=0,odd_count=0;
	
	printf("\n enter array size:");
	scanf("%d",&size);
	
	printf("\n enter array element:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<size;i++)
	{
	
	if (a[i]%2==0){
		even_count++;
	}
	else
	{
		odd_count++;
	}
}
	printf("\n total numbers of even numbers in this array =%d",even_count);
	printf("\n total numbers of odd numbers in this array =%d",odd_count);
}
