#include<stdio.h>
int main()
{
  int i;
  
  int stud_mark[5];
  for (i = 0; i <=5; i++)
	{

	  printf("enter the mark of subject",i+1);
	  scanf ("%d", &stud_mark[i]);
	  
	}
	
  printf ("\ndata you entered");
  for (i = 0; i < 5; i++)
	{
	   printf("\nmark of index [%d]is%d",i++);
	}   
	return 0;
	}
	    
