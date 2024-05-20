#include<stdio.h>
int main()
{
    char c=97;
	for(int i=97;i<=102;i++)
	{
		for(int j=97;j<=i;j++)
		{
		    
			printf("%c",c);
			c++;
		    
		}   
		printf("\n");
	} 
		return 0;
	}
