#include<stdio.h>
void math()
{
    char c=97;
	for(int i=97;i<=102;i++)
	{
		for(int j=97;j<=i;j++)
		{
		    
			printf("*");
			++c;
		    
		}   
		printf("\n");
	} 
		
	}
int main()
{
    math();
    math();
}