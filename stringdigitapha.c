#include <stdio.h>

 main()
{
    char str[100];
    int alp, digit, splch,spc, i;
    alp = digit = spc = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits , spaces and special characters :\n");	
       printf("\n enter the string : ");
       gets(str);	

    

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
         else if(str[i]==' ')
        {
            spc++;
        }
        else
        {
            splch++;
        }


    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of spaces in the string is : %d\n", spc);
    printf("Number of Special characters in the string is : %d\n\n", splch);
    
}
