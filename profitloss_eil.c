#include<stdio.h>
main()
{
	// profit and loss 
	int sp,cp,amt;
	
    printf("\n enter cost price");
    scanf("%d",&cp);
    printf("\n enter selling price");
    scanf("%d",&sp);
    if(sp>cp)
    {
    	amt=sp-cp;
    	printf("\n profit=%d",amt);
	}
	else if(sp<cp)
	{
		amt=cp-sp;
		printf("\n loss=%d",amt);
	}
	else
	{
		printf("\n enter value is wrong");
	}

}
